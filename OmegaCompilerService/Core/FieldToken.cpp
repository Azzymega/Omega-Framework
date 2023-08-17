//
// Created by Danil on 16.08.2023.
//

#include "FieldToken.h"



FieldToken::FieldToken(std::string unnamed, std::vector<char> unnamed3, std::string Type) : AbstractToken(unnamed, unnamed3) {
    this->ReturnType = Type;
}

std::string FieldToken::ReturnStringType() {
    return this->ReturnType;
}
