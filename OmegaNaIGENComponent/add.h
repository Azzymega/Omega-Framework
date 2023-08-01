//
// Created by Danil on 29.07.2023.
//

#ifndef RUNTIME_ADD_H
#define RUNTIME_ADD_H


#include "token.h"
namespace asmcmplr::tokens{
    class add : public token{
    public:
        add(char,char);
    };
}


#endif //RUNTIME_ADD_H
