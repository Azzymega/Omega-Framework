//
// Created by Danil on 29.07.2023.
//

#include "hlt.h"
#include "../LEGACYRuntime/microcode.h"


asmcmplr::tokens::hlt::hlt() {
    this->code = microcode::hlt;
};