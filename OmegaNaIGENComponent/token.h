//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_TOKEN_H
#define RUNTIME_TOKEN_H
#include "../LEGACYRuntime//microcode.h"
#define NOCOMMAND 0

class token {
protected:
    char data[2];
    microcode code;
public:
    char returnFirst();
    char returnSecond();
    microcode returnMicroCode();
};


#endif //RUNTIME_TOKEN_H
