//
// Created by Danil on 29.07.2023.
//

#include "cmv.h"
#include "../../microcode.h"

asmcmplr::tokens::cmv::cmv(char registr, char constantByte) : token() {
    this->code = microcode::cmv;
    data[0] = constantByte;
    data[1] = registr;
}

