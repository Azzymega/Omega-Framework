//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_TOKENFACTORY_H
#define RUNTIME_TOKENFACTORY_H


#include <vector>
#include <string>
#include "token.h"

struct tokenFactory {
    std::vector<token> tokens;
    void analyze(std::string);
};


#endif //RUNTIME_TOKENFACTORY_H
