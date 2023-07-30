//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_JMP_H
#define RUNTIME_JMP_H


#include "../token.h"
namespace asmcmplr::tokens{
    class jmp : public token{
    public:
        jmp(char);
    };
}



#endif //RUNTIME_JMP_H
