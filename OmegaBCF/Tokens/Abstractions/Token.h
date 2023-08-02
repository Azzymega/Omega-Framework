//
// Created by Danil on 02.08.2023.
//

#ifndef LEGACYRUNTIME_TOKEN_H
#define LEGACYRUNTIME_TOKEN_H


#include "../../../OmegaRuntime/Architecture/ArchitecturalDefines/RegistersType.h"

class Token {
private:
    Word FirstByte;
    Word SecondByte;
 public:
    Token(Word,Word);
};


#endif //LEGACYRUNTIME_TOKEN_H
