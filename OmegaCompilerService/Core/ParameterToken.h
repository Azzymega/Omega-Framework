//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_PARAMETERTOKEN_H
#define LEGACYRUNTIME_PARAMETERTOKEN_H


#include "../../OmegaAbstractionComponents/Architecture/ArchitecturalDefines/Core/RegistersType.h"
#include "AbstractToken.h"

class ParameterToken : public AbstractToken{
private:
    int Number;
    MethodParametersType Type;
public:
    ParameterToken(std::string unnamed2, std::vector<char> unnamed3, MethodParametersType, int);
    int ReturnNumber();
    MethodParametersType ReturnType();
    std::vector<char> ReturnInternals();
};


#endif //LEGACYRUNTIME_PARAMETERTOKEN_H
