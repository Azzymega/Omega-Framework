//
// Created by Danil on 29.07.2023.
//
#include "tokenFactory.h"
#include "../OmegaNaIGENComponent//hlt.h"
#include "../OmegaNaIGENComponent/jmp.h"
#include "../OmegaNaIGENComponent/add.h"
#include "../OmegaNaIGENComponent/cmv.h"
#include "../OmegaNaIGENComponent/mov.h"
#include "../OmegaNaIGENComponent/sub.h"
#include "../OmegaNaIGENComponent/SCL.h"

void tokenFactory::analyze(std::string def) {
    std::string bfr = def;
    std::string microcode = bfr.erase(3,def.length()-3);
    char firstByte = getFirstByte(def);
    char secondByte = getSecondByte(def);
    if (microcode == "hlt"){
        tokens.push_back(asmcmplr::tokens::hlt());
    }
    else if (microcode == "jmp"){
        tokens.push_back(asmcmplr::tokens::jmp(firstByte));
    }
    else if (microcode == "add"){
        tokens.push_back(asmcmplr::tokens::add(firstByte,secondByte));
    }
    else if (microcode == "cmv"){
        tokens.push_back(asmcmplr::tokens::cmv(firstByte,secondByte));
    }
    else if (microcode == "mov"){
        tokens.push_back(asmcmplr::tokens::mov(firstByte,secondByte));
    }
    else if (microcode == "sub"){
        tokens.push_back(asmcmplr::tokens::sub(firstByte,secondByte));
    }
    else if (microcode == "scl"){
        tokens.push_back(asmcmplr::tokens::SCL(firstByte,secondByte));
    }
}

char tokenFactory::getFirstByte(std::string def) {
    std::string arg = std::string("");
    for (int i = 4; i < def.length(); ++i) {
        if (def[i] == ','){
            break;
        }
        else{
            arg+=def[i];
        }
    }
    if (arg == ""){
        return 0;
    }
    int x = std::stoi(arg);
    return (char)x;
}

char tokenFactory::getSecondByte(std::string def) {
    std::string arg = std::string("");
    int commaIndex = 0;
    for (int i = 0; i < def.length(); ++i) {
        if (def[i] == ','){
            commaIndex = i;
            break;
        }
    }
    if (commaIndex != 0){
        for (int i = commaIndex+1; i < def.length(); ++i) {
            arg+=def[i];
        }
    }
    if (arg == ""){
        return 0;
    }
    int x = std::stoi(arg);
    return (char)x;
}

image tokenFactory::createLoadableImage() {
    image img = image();
    for (auto & token : tokens) {
        switch (token.returnMicroCode()) {
            case microcode::hlt:
                img.byteArray.push_back(microcode::hlt);
                break;
            case microcode::jmp:
                img.byteArray.push_back(microcode::jmp);
                img.byteArray.push_back(token.returnFirst());
                break;
            case microcode::add:
                img.byteArray.push_back(microcode::add);
                img.byteArray.push_back(token.returnFirst());
                img.byteArray.push_back(token.returnSecond());
                break;
            case microcode::mov:
                img.byteArray.push_back(microcode::mov);
                img.byteArray.push_back(token.returnFirst());
                img.byteArray.push_back(token.returnSecond());
                break;
            case microcode::cmv:
                img.byteArray.push_back(microcode::cmv);
                img.byteArray.push_back(token.returnFirst());
                img.byteArray.push_back(token.returnSecond());
                break;
            case microcode::sub:
                img.byteArray.push_back(microcode::sub);
                img.byteArray.push_back(token.returnFirst());
                img.byteArray.push_back(token.returnSecond());
                break;
            case microcode::scl:
                img.byteArray.push_back(microcode::scl);
                img.byteArray.push_back(token.returnFirst());
                img.byteArray.push_back(token.returnSecond());
                break;
        }
    }
    return img;
}
