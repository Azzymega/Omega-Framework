//
// Created by Danil on 16.08.2023.
//

#ifndef LEGACYRUNTIME_METHODPARAMETERPARSER_H
#define LEGACYRUNTIME_METHODPARAMETERPARSER_H


#include "AbstractParser.h"
#include "../Core/MethodParameterToken.h"

class MethodParameterParser : AbstractParser{
    AbstractToken * ParseToken(std::vector<char>) override;
};


#endif //LEGACYRUNTIME_METHODPARAMETERPARSER_H
