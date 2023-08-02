//
// Created by Danil on 02.08.2023.
//

#ifndef LEGACYRUNTIME_SCL_H
#define LEGACYRUNTIME_SCL_H


#include "../../../OmegaRuntime/Architecture/ArchitecturalDefines/RegistersType.h"
#include "../Abstractions/Token.h"

class SCL : public Token {
public:
    SCL(Word,Word);
};



#endif //LEGACYRUNTIME_SCL_H
