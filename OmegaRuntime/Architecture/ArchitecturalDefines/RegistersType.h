//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_REGISTERSTYPE_H
#define LIBRNT_REGISTERSTYPE_H

typedef char Word;

enum ModulesType {
    RLL = 0,
    OEX = 1
};

enum MethodParametersType {
    String = 0,
    Integer = 1
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
    ObjectType = 9,
    ObjectNameStarts = 10,
    ObjectNameEnds = 11,
    ObjectInternalStarts = 12,
    ObjectInternalEnds = 13,
    FieldToken = 14,
    FieldStarts = 30,
    FieldType = 15,
    FieldNameStart = 16,
    FieldNameEnds = 17,
    FieldEnds = 31,
    MethodToken = 18,
    MethodStarts = 28,
    MethodReturnType = 19,
    MethodNameStarts = 20,
    MethodNameEnds = 21,
    MethodParametersStart = 22,
    MethodParametersEnd = 23,
    MethodEnds = 29,
    NamespaceInternalEnds = 25,
    AssemblyEnds = 27
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
