//
// Created by Danil on 16.08.2023.
//

#ifndef LEGACYRUNTIME_METHODPARAMETERTOKEN_H
#define LEGACYRUNTIME_METHODPARAMETERTOKEN_H


#include "AbstractToken.h"

class MethodParameterToken : public AbstractToken{
private:
    std::string Type;
    int Number;
public:
    MethodParameterToken(std::string unnamed, std::vector<char> unnamed1, std::string, int);
};


#endif //LEGACYRUNTIME_METHODPARAMETERTOKEN_H
