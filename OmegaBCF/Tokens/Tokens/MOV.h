//
// Created by Danil on 02.08.2023.
//

#ifndef LEGACYRUNTIME_MOV_H
#define LEGACYRUNTIME_MOV_H


#include "../../../OmegaRuntime/Architecture/ArchitecturalDefines/RegistersType.h"
#include "../Abstractions/Token.h"

class MOV : public Token {
public:
    MOV(Word,Word);
};



#endif //LEGACYRUNTIME_MOV_H
