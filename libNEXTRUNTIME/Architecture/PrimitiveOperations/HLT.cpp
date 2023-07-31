//
// Created by Danil on 31.07.2023.
//

#include <iostream>
#include "HLT.h"


Word HLT::PerformOperation(Word, Word) {
    std::cout << "Halt";
}

HLT::HLT(struct Runtime * Runtime) : Operation(Cell(), Cell(), Runtime) {

}
