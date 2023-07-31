//
// Created by Danil on 31.07.2023.
//

#include "Operation.h"

Cell Operation::ReturnFirstArgument() {
    return FirstArgument;
}

Cell Operation::ReturnSecondArgument() {
    return SecondArgument;
}


Operation::Operation(Cell FirstArgument, Cell SecondArgument, struct Runtime * Runtime) {
    this->FirstArgument = FirstArgument;
    this->SecondArgument = SecondArgument;
    this->Runtime = Runtime;
}
