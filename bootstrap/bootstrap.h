//
// Created by Danil on 30.07.2023.
//

#ifndef RUNTIME_BOOTSTRAP_H
#define RUNTIME_BOOTSTRAP_H


#include <iostream>
#include <fstream>
#include "../librnt/cpu.h"
#include "../librnt/microcode.h"
#include "../libldr/ldr.h"

int main()
{
    std::string filepath;
    int filesize;
    char* image;
    cpu centralProcessingUnit = cpu();
    firmware cpuMicrocode = firmware();
    std::cout << "loadable binary assembly file path:" << std::endl;
    std::cin >> filepath;
    std::ifstream file( filepath, std::ios::binary | std::ios::ate);
    filesize = file.tellg();
    image = static_cast<char *>(malloc(filesize));
    load(filepath.c_str(),image);
    cpuMicrocode.interpret(image,filesize,centralProcessingUnit);
    std::cout << std::endl;
    system("pause"); // линукс не выдержит.
    return 0;
}


#endif //RUNTIME_BOOTSTRAP_H
