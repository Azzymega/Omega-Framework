//
// Created by Danil on 02.08.2023.
//

#ifndef LEGACYRUNTIME_JMP_H
#define LEGACYRUNTIME_JMP_H


#include "../../../OmegaRuntime/Architecture/ArchitecturalDefines/RegistersType.h"
#include "../Abstractions/Token.h"

class JMP : public Token {
public:
    JMP(Word);
};



#endif //LEGACYRUNTIME_JMP_H
