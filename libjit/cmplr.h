//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_CMPLR_H
#define RUNTIME_CMPLR_H
#include "image.h"
#include "../libldr/ldr.h"
#include "../libwrt/wrtr.h"
#include "../libcmp/tokenFactory.h"
#include <iostream>
#include <vector>

void jit(){
    std::string path;
    std::string imagePath = "assembly.ort";
    std::cout << "assembly file path:" << std::endl;
    std::cin >> path;
    //loader ldr = loader(path);
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
    cpuMicrocode.interpret(image,img.byteArray.size() * sizeof(char),centralProcessingUnit);
    std::cout << std::endl;
    system("pause");
}


#endif //RUNTIME_CMPLR_H
