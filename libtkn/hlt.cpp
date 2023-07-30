//
// Created by Danil on 29.07.2023.
//

#include "hlt.h"
#include "../runtime/microcode.h"


asmcmplr::tokens::hlt::hlt() {
    this->code = microcode::hlt;
};
