//
// Created by Danil on 29.07.2023.
//

#include "hlt.h"
#include "../../microcode.h"


asmcmplr::tokens::hlt::hlt() {
    this->code = microcode::hlt;
};
