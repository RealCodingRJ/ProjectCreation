#include <cstring>
#include <iostream>
#include <thread>
#include "MyModule.h"
#include <Windows.h>
#include<cstdio>

namespace Type {

    void PrintMessage(const std::string &message) {

        auto l = [message]() mutable {
            std::cout << message << std::endl;
        };

        l();
    }

    void COMPLETED_FUNCTION() {
        std::cout << "[COMPLETED]" << std::endl;
    }

    void printMessageIntro(const std::string& INTROMessage) {
        std::cout << INTROMessage << std::endl;
    }

}


std::string (*ANSWER)(const std::string*);


std::string isAnswer(const std::string *option) {
    return *option;
}

int main(int argc, char* argv[]) {

    std::string answer;
    if (strcmp(argv[0], "-r") == 0) {
        SystemCommands::createWindowsCommand("npx create-nano-react-app myapp");
        Type::COMPLETED_FUNCTION();
        exit(0);
    }

    Type::PrintMessage("Welcome to Project Creation Application");
    Sleep(3000);
    Type::printMessageIntro("Enter Option: ");

    ANSWER = &isAnswer;
    std::cin >> answer;

    if (strcmp(answer.c_str(), "React") == 0) {
        std::cout << ANSWER(&answer) << std::endl;
        SystemCommands::createWindowsCommand("npx create-nano-react-app myapp");
        Type::COMPLETED_FUNCTION();

        exit(0);
    }

    if (strcmp(answer.c_str(), "Ts") == 0) {
        std::cout << ANSWER(&answer) << std::endl;
        SystemCommands::createWindowsCommand("npx nano-react-app --ts");
        Type::COMPLETED_FUNCTION();

        exit(0);
    }

    if (strcmp(answer.c_str(), "Next") == 0) {

        std::cout << ANSWER(&answer) << std::endl;
        SystemCommands::createWindowsCommand( "npx create-next-app");
        Type::COMPLETED_FUNCTION();

        exit(0);
    }

    if (strcmp(answer.c_str(), "Vite") == 0) {

        std::cout << ANSWER(&answer) << std::endl;
        SystemCommands::createWindowsCommand( "npm create vite");
        Type::COMPLETED_FUNCTION();

        exit(0);
    }

    return 0;
}