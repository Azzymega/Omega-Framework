//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_REGISTERSTYPE_H
#define LIBRNT_REGISTERSTYPE_H

typedef long long Word;

enum MetadataTypes {
    MT_START = 19550,
    MT_END = 19551,
    OBJ_DATA_START = 19552,
    OBJ_DATA_END = 19553
};

enum MetadataObjectsType {
    MT_METHOD = 0,
};

enum Microcode {
    OP_HLT = 0,
    OP_MOV = 1,
    OP_JMP = 2,
    OP_ADD = 3,
    OP_SUB = 4,
    OP_CMV = 5,
    OP_SCL = 6,
    OP_PUSH = 7,
    OP_POP = 8
};


#endif //LIBRNT_REGISTERSTYPE_H
