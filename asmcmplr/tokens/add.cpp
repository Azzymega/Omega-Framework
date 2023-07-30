//
// Created by Danil on 29.07.2023.
//

#include "add.h"
#include "../../microcode.h"

asmcmplr::tokens::add::add(char firstByte, char secondByte) : token() {
    this->code = microcode::add;
    data[0] = firstByte;
    data[1] = secondByte;
}

