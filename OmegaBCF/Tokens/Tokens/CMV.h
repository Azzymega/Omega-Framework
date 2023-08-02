//
// Created by Danil on 02.08.2023.
//

#ifndef LEGACYRUNTIME_CMV_H
#define LEGACYRUNTIME_CMV_H


#include "../../../OmegaRuntime/Architecture/ArchitecturalDefines/RegistersType.h"
#include "../Abstractions/Token.h"

class CMV : public Token {
public:
    CMV(Word,Word);
};


#endif //LEGACYRUNTIME_CMV_H
