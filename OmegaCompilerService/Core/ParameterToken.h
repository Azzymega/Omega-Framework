//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_PARAMETERTOKEN_H
#define LEGACYRUNTIME_PARAMETERTOKEN_H


#include "../../OmegaRuntime/Architecture/ArchitecturalDefines/Core/RegistersType.h"
#include "AbstractToken.h"

class ParameterToken : public AbstractToken{
private:
    MethodParametersType Type;
public:
    ParameterToken(std::string unnamed, std::vector<char> unnamed1, MethodParametersType);
};


#endif //LEGACYRUNTIME_PARAMETERTOKEN_H
