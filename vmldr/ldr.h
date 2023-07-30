//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_LOADER_H
#define RUNTIME_LOADER_H

#include <fstream>

struct loader {
    std::ifstream stream;
    std::string path;
    loader(const std::string&);
    std::string loadLine();
};

void load(const char* path, char* dest);

#endif //RUNTIME_LOADER_H
