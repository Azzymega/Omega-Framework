//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_SUB_H
#define RUNTIME_SUB_H


#include "token.h"
namespace asmcmplr::tokens{
    class sub : public token{
    public:
        sub(char,char);
    };
}



#endif //RUNTIME_SUB_H
