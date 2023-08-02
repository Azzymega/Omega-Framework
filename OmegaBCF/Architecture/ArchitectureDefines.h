//
// Created by Danil on 02.08.2023.
//

#ifndef LEGACYRUNTIME_ARCHITECTUREDEFINES_H
#define LEGACYRUNTIME_ARCHITECTUREDEFINES_H

enum LexersType {
    AssemblyLexer = '(',
    MetadataLexer = '[',
    InstructionLexer = '{',
    AssemblyLexerEnd = ')',
    MetadataLexerEnd = ']',
    InstructionLexerEnd = '}'
};

#endif //LEGACYRUNTIME_ARCHITECTUREDEFINES_H
