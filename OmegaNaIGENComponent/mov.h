//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_MOV_H
#define RUNTIME_MOV_H

#include "token.h"

namespace asmcmplr::tokens{
    class mov : public token{
    public:
        mov(char,char);
    };
}



#endif //RUNTIME_MOV_H
