//
// Created by Danil on 30.07.2023.
//

#ifndef RUNTIME_BOOTSTRAP_H
#define RUNTIME_BOOTSTRAP_H


#include <iostream>
#include <fstream>

#include "../OmegaLoaderComponent//ldr.h"
#include "../OmegaRuntime//Runtime/Core/Runtime.h"
#include "../OmegaRuntime/Runtime/Analyzer/Utility/ROMAnalyzer.h"

int main()
{
    std::string filepath;
    int filesize;
    char* image;
    char byte;
    Runtime rnt;
    ROMAnalyzer alz;
    Stack stc = Stack();
    std::cout << "loadable binary assembly file path:" << std::endl;
    std::cin >> filepath;
    std::ifstream file( filepath);
    if (file.is_open()){
        while(file >> byte){
            stc.AppendCell(Cell(byte));
        }
    }
    alz.Analyze(&stc,&rnt);
    rnt.Execute();
    std::cout << std::endl;
    system("pause"); // линукс не выдержит.
    return 0;
}


#endif //RUNTIME_BOOTSTRAP_H
