//
// Created by Danil on 13.08.2023.
//

#ifndef LEGACYRUNTIME_ARCHITECTURALDEFINES_H
#define LEGACYRUNTIME_ARCHITECTURALDEFINES_H

enum DefinitionTypes {
    AssemblyT = 0,
    ModuleT = 1,
    NamespaceT = 2,
    ClassT = 3,
    Struct = 4,
    MethodT = 5,
    FieldT = 6,
    Instruction = 7
};

enum BCFTokenTypes {
    DefineStart = '.',
    DefinitionStarts = '{',
    DefinitionEnds = '}'
};


#endif //LEGACYRUNTIME_ARCHITECTURALDEFINES_H
