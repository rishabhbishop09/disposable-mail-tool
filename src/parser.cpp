// parser.cpp — part of disposable-mail-tool.

#include "disposablemailtool/parser.h"

#include <cstdio>

namespace disposablemailtool {

Parser::Parser(const std::string& config_path)
    : config_path_(config_path) {}

void Parser::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Parser::run() {
    if (verbose_) std::fprintf(stderr, "[disposable-mail-tool] parser: run\n");
    // core logic lives here
    return true;
}

}  // namespace disposablemailtool
