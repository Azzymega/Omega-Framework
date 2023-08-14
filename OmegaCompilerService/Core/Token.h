//
// Created by Danil on 14.08.2023.
//

#ifndef LEGACYRUNTIME_TOKEN_H
#define LEGACYRUNTIME_TOKEN_H


#include <vector>
#include <string>
#include "ArchitecturalDefines.h"

class Token {
private:
    DefinitionTypes Type;
    std::string Name;
    std::vector<char> Internals;
public:
    Token(std::string, std::vector<char>, DefinitionTypes);
    std::string ReturnName();
    std::vector<char> ReturnInternals();
    DefinitionTypes ReturnType();
};


#endif //LEGACYRUNTIME_TOKEN_H
