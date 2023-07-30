//
// Created by Danil on 29.07.2023.
//
#include "tokenFactory.h"
#include "tokens/hlt.h"
#include "tokens/jmp.h"
#include "tokens/add.h"
#include "tokens/cmv.h"
#include "tokens/mov.h"
#include "tokens/sub.h"

void tokenFactory::analyze(std::string def) {
    std::string microcode = def.erase(3,def.length()-3);
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
    else{
        
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
    return std::stoi(arg);
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
    for (int i = commaIndex; i < def.length(); ++i) {
        arg+=def[i];
    }
    return std::stoi(arg);
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
        }
    }
    return img;
}
