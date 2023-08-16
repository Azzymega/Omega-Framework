//
// Created by Danil on 15.08.2023.
//

#include "ParameterToken.h"

ParameterToken::ParameterToken(std::string unnamed2, std::vector<char> unnamed3, MethodParametersType Type, int Number) : AbstractToken(unnamed2, unnamed3) {
    this->Type = Type;
    this->Number = Number;
}

int ParameterToken::ReturnNumber() {
    return Number;
}

MethodParametersType ParameterToken::ReturnType() {
    return Type;
}

std::vector<char> ParameterToken::ReturnInternals() {
    return this->Internals;
}
