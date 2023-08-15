//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_ABSTRACTPARSER_H
#define LEGACYRUNTIME_ABSTRACTPARSER_H


#include "../Core/AbstractToken.h"
#include "../Core/ArchitecturalDefines.h"

class AbstractParser {
public:
    virtual AbstractToken* ParseToken(std::vector<char>) = 0;
};


#endif //LEGACYRUNTIME_ABSTRACTPARSER_H
