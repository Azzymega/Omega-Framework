//
// Created by Danil on 15.08.2023.
//

#include "ParameterParser.h"
#include "../Core/ParameterToken.h"

AbstractToken* ParameterParser::ParseToken(std::vector<char> Data) {
    MethodParametersType Type;
    if (isdigit(Data.at(0))){
        Type = MethodParametersType::TString;
    }
    else{
        Type = MethodParametersType::TInteger;
    }
    return new ParameterToken("",Data,Type,0);
}
