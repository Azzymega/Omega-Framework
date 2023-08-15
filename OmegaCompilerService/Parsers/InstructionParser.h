//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_INSTRUCTIONPARSER_H
#define LEGACYRUNTIME_INSTRUCTIONPARSER_H


#include "AbstractParser.h"

class InstructionParser : public AbstractParser{
AbstractToken * ParseToken(std::vector<char>) override;
};


#endif //LEGACYRUNTIME_INSTRUCTIONPARSER_H
