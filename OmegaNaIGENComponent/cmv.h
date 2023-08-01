//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_CMV_H
#define RUNTIME_CMV_H
#include "token.h"
namespace asmcmplr::tokens{
    class cmv : public token{
    public:
        cmv(char,char);
    };
}



#endif //RUNTIME_CMV_H
