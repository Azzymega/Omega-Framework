//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_TOKENFACTORY_H
#define RUNTIME_TOKENFACTORY_H


#include <vector>
#include <string>
#include "token.h"
#include "../OmegaNaIGEN///image.h"

struct tokenFactory {
    std::vector<token> tokens;
    void analyze(std::string);
    char getFirstByte(std::string);
    char getSecondByte(std::string);
    image createLoadableImage();
};


#endif //RUNTIME_TOKENFACTORY_H
