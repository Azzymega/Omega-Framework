//
// Created by Danil on 29.07.2023.
//

#include "mov.h"
#include "../runtime/microcode.h"

asmcmplr::tokens::mov::mov(char settableRegister, char dataDonor) : token() {
    this->code = microcode::mov;
    data[0] = settableRegister;
    data[1] = dataDonor;
}
