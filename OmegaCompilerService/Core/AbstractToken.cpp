//
// Created by Danil on 15.08.2023.
//

#include "AbstractToken.h"

AbstractToken::AbstractToken(std::string Name, std::vector<char> Internals) {
    this->Name = Name;
    this->Internals = Internals;
}

std::string AbstractToken::ReturnName() {
    return this->Name;
}
