//
// Created by Danil on 29.07.2023.
//

#include "sub.h"
asmcmplr::tokens::sub::sub(char firstByte, char secondByte) {
    this->code = microcode::sub;
    data[0] = firstByte;
    data[1] = secondByte;
}
