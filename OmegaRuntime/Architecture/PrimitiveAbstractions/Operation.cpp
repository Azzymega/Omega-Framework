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


Operation::Operation(Cell FA, Cell SA, void* Runtime) : FirstArgument(0), SecondArgument(0) {
    this->FirstArgument = FA;
    this->SecondArgument = SA;
    this->Runtime = Runtime;
}
