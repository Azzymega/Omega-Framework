//
// Created by Danil on 28.07.2023.
//

#ifndef RUNTIME_MICROCODE_H
#define RUNTIME_MICROCODE_H

#include "cpu.h"

enum registers {
    fr = 1,
    sr = 2,
    tr = 3
};

enum microcode {
    hlt = 0,
    mov = 1,
    jmp = 2,
    add = 3,
    sub = 4,
    cmv = 5,
    scl = 6
};

struct firmware {
    static void interpret(void*, int, cpu);
};
#endif //RUNTIME_MICROCODE_H

