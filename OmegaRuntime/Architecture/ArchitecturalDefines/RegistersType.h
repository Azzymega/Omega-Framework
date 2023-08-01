//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_REGISTERSTYPE_H
#define LIBRNT_REGISTERSTYPE_H

typedef char Word;

enum Microcode {
    OP_HLT = 0,
    OP_MOV = 1,
    OP_JMP = 2,
    OP_ADD = 3,
    OP_SUB = 4,
    OP_CMV = 5,
    OP_SCL = 6
};


#endif //LIBRNT_REGISTERSTYPE_H
