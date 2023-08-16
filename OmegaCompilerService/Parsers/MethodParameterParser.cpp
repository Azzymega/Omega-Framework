//
// Created by Danil on 16.08.2023.
//

#include "MethodParameterParser.h"

AbstractToken *MethodParameterParser::ParseToken(std::vector<char> Data) {
    int Number = Data.at(0);
    std::string Type;
    for (int i = 1; i < Data.size(); ++i) {
        Type+=Data.at(i);
    }
    return new MethodParameterToken("",std::vector<char>(),Type,Number);
}
