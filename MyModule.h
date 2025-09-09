#pragma once

#include <string>
#include <Windows.h>

namespace SystemCommands {
    inline void createWindowsCommand(const std::string& command) {
        ShellExecuteA(nullptr, "open", command.c_str(),
            nullptr, nullptr, SW_SHOWDEFAULT );
    }
}