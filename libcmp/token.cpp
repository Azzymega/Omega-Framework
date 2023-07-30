//
// Created by Danil on 29.07.2023.
//

#include "token.h"

microcode token::returnMicroCode() {
    return code;
}

char token::returnFirst() {
    return data[0];
}

char token::returnSecond() {
    return data[1];
}
