#include <cstring>
#include <iostream>
#include <thread>
#include "MyModule.h"
#include <Windows.h>

void printMessage();

std::string (*ANSWER)(const std::string*);


std::string isAnswer(const std::string *option) {
    return *option;
}

void printMessage() {
    std::cout << "Function Rand Fine.." << std::endl;
}

void COMPLETED_FUNCTION() {
    std::cout << "[COMPLETED]" << std::endl;
}

void printMessageIntro(const std::string& INTROMessage) {
    std::cout << INTROMessage << std::endl;
}

int main(int argc, char* argv[]) {

    std::string answer;
    if (strcmp(argv[0], "-r") == 0) {
        createWindowsCommand("npx create-nano-react-app myapp");
        COMPLETED_FUNCTION();
        exit(0);
    }

    Sleep(3000);
    printMessageIntro("Enter Option: ");

    ANSWER = &isAnswer;
    std::cin >> answer;

    std::thread th(printMessage);

    th.join();

    if (strcmp(answer.c_str(), "React") == 0) {
        std::cout << ANSWER(&answer) << std::endl;
        createWindowsCommand("npx create-nano-react-app myapp");
        COMPLETED_FUNCTION();

        exit(0);
    }

    if (strcmp(answer.c_str(), "Ts") == 0) {
        std::cout << ANSWER(&answer) << std::endl;
        createWindowsCommand("npx nano-react-app --ts");
        COMPLETED_FUNCTION();

        exit(0);
    }

    if (strcmp(answer.c_str(), "Next") == 0) {

        std::cout << ANSWER(&answer) << std::endl;
        createWindowsCommand( "npx create-next-app");
        COMPLETED_FUNCTION();

        exit(0);
    }

    if (strcmp(answer.c_str(), "Vite") == 0) {

        std::cout << ANSWER(&answer) << std::endl;
        createWindowsCommand( "npm create vite");
        COMPLETED_FUNCTION();

        exit(0);
    }

    return 0;
}