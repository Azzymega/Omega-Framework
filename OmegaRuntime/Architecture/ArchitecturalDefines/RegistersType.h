//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_REGISTERSTYPE_H
#define LIBRNT_REGISTERSTYPE_H

typedef int Word;

enum ModulesType {
    RLL = 0,
    OEX = 1
};

enum ObjectTypes {
    STRUCT = -44,
    CLASS = -55,
};

enum MethodParametersType {
    TString = 0,
    TInteger = 1
};

enum TokenTypes {
    AssemblyToken = 0,
    AssemblyNameStarts = 1,
    AssemblyNameEnds = 2,
    AssemblyStarts = 26,
    ModuleToken = 3,
    ModuleNameStarts = 4,
    ModuleNameEnd = 5,
    NamespaceToken = 6,
    NamespaceNameStarts = 7,
    NamespaceNameEnd = 8,
    NamespaceInternalStarts = 24,
    ObjectStarts = 9,
    ObjectType = -4,
    ObjectNameStarts = 10,
    ObjectNameEnds = 11,
    FieldStarts = 30,
    FieldType = 15,
    FieldNameStart = -34,
    FieldNameEnds = -20,
    FieldEnds = 31,
    MethodStarts = 28,
    MethodNameStarts = 20,
    MethodNameEnds = 21,
    MethodParameterStart = 99,
    MethodParameterEnd = 100,
    MethodEnds = 29,
    ObjectEnds = -32,
    NamespaceInternalEnds = 25,
    AssemblyEnds = 27,
    InstructionStarts = 99,
    InstructionEnds = 102,
    InstructionParameterTypeStart = 115,
    InstructionParameterTypeEnds = 114
};

enum Microcode {
    OP_ADD = 0,
    OP_ISLOAD = 1,
    OP_POP = 2,
    OP_SILOAD = 3,
    OP_SLOAD = 4,
};


#endif //LIBRNT_REGISTERSTYPE_H
