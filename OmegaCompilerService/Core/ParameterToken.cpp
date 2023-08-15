//
// Created by Danil on 15.08.2023.
//

#include "ParameterToken.h"

ParameterToken::ParameterToken(std::string unnamed, std::vector<char> unnamed1, MethodParametersType Type) : AbstractToken(unnamed, unnamed1) {
    this->Type = Type;
}
