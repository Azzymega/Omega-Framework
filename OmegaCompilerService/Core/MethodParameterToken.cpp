//
// Created by Danil on 16.08.2023.
//

#include "MethodParameterToken.h"

MethodParameterToken::MethodParameterToken(std::string unnamed, std::vector<char> unnamed1, std::string Type, int Number)
        : AbstractToken(unnamed, unnamed1) {
    this->Type = Type;
    this->Number = Number;
}
