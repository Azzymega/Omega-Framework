//
// Created by Danil on 29.07.2023.
//

#include "cmv.h"
#include "../runtime/microcode.h"

asmcmplr::tokens::cmv::cmv(char registr, char constantByte) : token() {
    this->code = microcode::cmv;
    data[1] = constantByte;
    data[0] = registr;
}

