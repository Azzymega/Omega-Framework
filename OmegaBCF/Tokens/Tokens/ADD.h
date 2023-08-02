//
// Created by Danil on 02.08.2023.
//

#ifndef LEGACYRUNTIME_ADD_H
#define LEGACYRUNTIME_ADD_H


#include "../../../OmegaRuntime/Architecture/ArchitecturalDefines/RegistersType.h"
#include "../Abstractions/Token.h"

class ADD : public Token {
public:
    ADD(Word,Word);
};


#endif //LEGACYRUNTIME_ADD_H
