//
// Created by Danil on 04.08.2023.
//

#include "Command.h"

Command::Command(std::vector<Cell> Operands, void * Runtime) {
    this->Runtime = Runtime;
    this->Operands = Operands;
}

Cell Command::ReturnArguments(Word Index) {
    return Operands[Index];
}
