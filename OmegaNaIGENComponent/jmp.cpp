//
// Created by Danil on 29.07.2023.
//

#include "jmp.h"
#include "../LEGACYRuntime//microcode.h"

asmcmplr::tokens::jmp::jmp(char jmpAdress) : token() {
    this->code = microcode::jmp;
    data[0] = jmpAdress;
}

