//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_TOKEN_H
#define RUNTIME_TOKEN_H
#include "../microcode.h"
#define NOCOMMAND 0

class token {
private:
    microcode code;
    char arguments[2];
};


#endif //RUNTIME_TOKEN_H
