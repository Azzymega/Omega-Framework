//
// Created by Danil on 30.07.2023.
//

#include "SCL.h"

asmcmplr::tokens::SCL::SCL(char SystemCallID, char Argument) {
    this->code = microcode::scl;
    data[0] = SystemCallID;
    data[1] = Argument;
}
