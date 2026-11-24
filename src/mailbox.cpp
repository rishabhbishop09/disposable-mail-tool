// mailbox.cpp — part of disposable-mail-tool.

#include "disposablemailtool/mailbox.h"

#include <cstdio>

namespace disposablemailtool {

Mailbox::Mailbox(const std::string& config_path)
    : config_path_(config_path) {}

void Mailbox::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Mailbox::run() {
    if (verbose_) std::fprintf(stderr, "[disposable-mail-tool] mailbox: run\n");
    // core logic lives here
    return true;
}

}  // namespace disposablemailtool
