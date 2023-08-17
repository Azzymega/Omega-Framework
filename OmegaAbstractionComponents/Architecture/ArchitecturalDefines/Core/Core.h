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
    CLASS = -55
};

enum MethodParametersType {
    TString = 0,
    TInteger = 1
};

enum TokenTypes { // Нужен общий рефакторинг. Положить по два токена в-
    // структуры и уже на их основе переписать анализаторы.
    AssemblyNameStarts = 1,
    AssemblyNameEnds = 2,
    ModuleStarts = 3332,
    ModuleNameStarts = 4,
    ModuleNameEnd = 5,
    NamespaceStarts = 6,
    NamespaceNameStarts = 7,
    NamespaceNameEnd = 8,
    ObjectStarts = 9,
    ObjectType = -4,
    ObjectNameStarts = 10,
    ObjectNameEnds = 11,
    FieldStarts = 30,
    FieldNameStart = -34,
    FieldNameEnds = -20,
    FieldEnds = 31,
    MethodStarts = 28,
    MethodNameStarts = 3333333,
    MethodNameEnds = 21,
    MethodParameterStart = 99,
    MethodParameterEnd = 100,
    MethodEnds = 29,
    ObjectEnds = -32,
    NamespaceEnds = -17,
    ModuleEnds = 3333,
    InstructionStarts = 99,
    InstructionEnds = 102,
    InstructionParameterStart = 115,
    InstructionParameterEnds = 114,
    MethodReturnTypeStarts = 33333,
    MethodReturnTypeEnds = 322456,
    ParameterTypeNameStart = -233232,
    ParameterTypeNameEnds = -32323232,
    ParameterNameStart = -3232,
    ParameterNameEnds = -32321,
    ParameterIndexStart = 9234,
    ParameterIndexEnds = -2341
};

enum Microcode {
    OP_ADD = 0,
    OP_ISLOAD = 1,
    OP_POP = 2,
    OP_SILOAD = 3,
    OP_SLOAD = 4,
};


#endif //LIBRNT_REGISTERSTYPE_H
