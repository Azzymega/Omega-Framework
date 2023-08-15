//
// Created by Danil on 15.08.2023.
//

#include "InstructionToken.h"

InstructionToken::InstructionToken(std::string unnamed2, std::vector<char> unnamed3, Microcode Type) : AbstractToken(unnamed2, unnamed3) {
    this->Type = Type;
}

Microcode InstructionToken::ReturnType() {
    return Type;
}
