#ifndef ISHELL_UTILS_HPP
#define ISHELL_UTILS_HPP

#include <iostream>
#include <cstring>

void split(char *buffer, char *commands[]) {
    int i = 0;
    commands[0] = strtok(buffer, " ");
    while (commands[i] != nullptr) {
        commands[++i] = strtok(nullptr, " ");
    }
}

#endif //ISHELL_UTILS_HPP
