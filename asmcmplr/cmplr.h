//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_CMPLR_H
#define RUNTIME_CMPLR_H

#include "../libldr/ldr.h"
#include "../libcmp/tokenFactory.h"
#include "../libwrt/wrtr.h"
#include <iostream>
#include <vector>

int main(){
    std::string path;
    std::string imagePath = "assembly.ort";
    std::cout << "assembly file path:" << std::endl;
    std::cin >> path;
    //loader ldr = loader(path);
    std::string streamLine;
    image img;
    wrtr writer = wrtr(imagePath);
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
    for (char i : img.byteArray) {
        writer.writeByte(i);
    }
    return 0;
}


#endif //RUNTIME_CMPLR_H
