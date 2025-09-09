#include <string>
#include <Windows.h>

void createWindowsCommand(const std::string& command) {
    ShellExecuteA(nullptr, "open", command.c_str(),
        nullptr, nullptr, SW_SHOWDEFAULT );
}