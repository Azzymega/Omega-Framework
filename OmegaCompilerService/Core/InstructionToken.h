//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_INSTRUCTIONTOKEN_H
#define LEGACYRUNTIME_INSTRUCTIONTOKEN_H


#include "AbstractToken.h"
#include "../../OmegaAbstractionComponents/Architecture/ArchitecturalDefines/Core/Core.h"

class InstructionToken : public AbstractToken {
private:
    Microcode Type;
public:
    Microcode ReturnType();
    InstructionToken(std::string unnamed2, std::vector<char> unnamed3, Microcode);
};


#endif //LEGACYRUNTIME_INSTRUCTIONTOKEN_H
