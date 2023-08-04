//
// Created by Danil on 31.07.2023.
//

#include <iostream>
#include "HLT.h"
#include "../PrimitiveAbstractions/Operation.h"

Word HLT::PerformOperation(Word, Word) {
    std::cout << "Halt";
    return 0;
}

HLT::HLT(void* Runtime) : Operation(Cell(0), Cell(0), Runtime) {

}
