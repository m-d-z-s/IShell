#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include "utils.hpp"

int main() {
    while (true) {
        char buffer[100];
        std::cout << "Enter command: ";
        std::cin.getline(buffer, 100);
        char *commands[20];
        split(buffer, commands);

        if (!fork()) {
            execvp(commands[0], commands);
            std::cout << "Command not found" << std::endl;
        }
        else{
            wait(nullptr);
        }
    }

    return 0;
}
