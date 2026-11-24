// main.cpp — entry point. Wires config and subsystems together.

#include "disposablemailtool/settings.h"
#include "disposablemailtool/mailbox.h"
#include "disposablemailtool/api.h"
#include "disposablemailtool/parser.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    disposablemailtool::Settings settings = disposablemailtool::Settings::load_default();
    disposablemailtool::Mailbox mailbox(settings.store_path);
    disposablemailtool::Api api(settings.store_path);
    disposablemailtool::Parser parser(settings.store_path);
    std::fprintf(stderr, "[disposable-mail-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
