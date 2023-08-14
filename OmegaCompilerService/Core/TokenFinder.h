//
// Created by Danil on 14.08.2023.
//

#ifndef LEGACYRUNTIME_TOKENFINDER_H
#define LEGACYRUNTIME_TOKENFINDER_H


#include <string>
#include "Token.h"

class TokenFinder {
public:
    static Token FindAssemblyData(std::string);
    static Token FindModuleData(std::string);
};


#endif //LEGACYRUNTIME_TOKENFINDER_H
