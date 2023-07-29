//
// Created by Danil on 29.07.2023.
//

#include "ldr.h"

void load(const char* path, char *dest) {
    loader lod = loader(std::string(path));
    while(lod.stream >> *dest){
        dest++;
    }
}

loader::loader(const std::string& path) {
    this->path = path;
    this->stream = std::ifstream(path);
}

std::string loader::loadLine() {
    std::string str;
    std::getline(this->stream,str);
    return str;
}
