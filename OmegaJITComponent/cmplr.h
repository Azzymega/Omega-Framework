//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_CMPLR_H
#define RUNTIME_CMPLR_H
#include "image.h"
#include "../OmegaLoaderComponent//ldr.h"
#include "../OmegaWriterComponent//wrtr.h"
#include "../OmegaNaIGENComponent/tokenFactory.h"
#include "../OmegaRuntime/Runtime/Core/Runtime.h"
#include "../OmegaRuntime/Runtime/Analyzer/Utility/ROMAnalyzer.h"
#include <iostream>
#include <vector>

void jit(){
    std::string path;
    std::string imagePath = "assembly.ort";
    std::cout << "assembly file path:" << std::endl;
    std::cin >> path;
    Runtime rnt;
    ROMAnalyzer alz;
    Stack stc = Stack();
    std::string streamLine;
    image img;
    wrtr writer = wrtr(imagePath); // UB, иначе компилятор перестаёт работать вообще.
    std::vector<std::string> lines;
    tokenFactory factory = tokenFactory();
    std::ifstream str(path);
    if (str.is_open()){
        while( std::getline( str, streamLine ) ) {
            lines.push_back(streamLine);
        }
    }
    for (const auto & line : lines) {
        factory.analyze(line);
    }
    img = factory.createLoadableImage();
    char* image = static_cast<char *>(malloc(img.byteArray.size() * sizeof(char)));
    for (int i = 0; i < img.byteArray.size(); i++){
        char* imagePointer = image;
        imagePointer+=i;
        *imagePointer = img.byteArray.at(i);
    }
    cpu centralProcessingUnit = cpu();
    firmware cpuMicrocode = firmware();
    for (char c : img.byteArray) {
        stc.AppendCell(Cell(c));
    }
    alz.Analyze(&stc,&rnt);
    rnt.Execute();
    std::cout << std::endl;
    system("pause"); // линукс не выдержит.
}


#endif //RUNTIME_CMPLR_H
