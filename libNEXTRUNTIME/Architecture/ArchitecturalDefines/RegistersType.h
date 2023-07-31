//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_REGISTERSTYPE_H
#define LIBRNT_REGISTERSTYPE_H

typedef char Word;
#endif //LIBRNT_REGISTERSTYPE_H

enum Microcode {
    HLT = 0,
    MOV = 1,
    JMP = 2,
    ADD = 3,
    SUB = 4,
    CMV = 5,
    SCL = 6
};
