//
// Created by Danil on 14.08.2023.
//

#include "Token.h"

#include <utility>

Token::Token(std::string Name, std::vector<char> Internals, DefinitionTypes Type) {
    this->Type = Type;
    this->Name = std::move(Name);
    this->Internals = std::move(Internals);
}

std::string Token::ReturnName() {
    return this->Name;
}

std::vector<char> Token::ReturnInternals() {
    return this->Internals;
}

DefinitionTypes Token::ReturnType() {
    return this->Type;
}


