//
// Created by Danil on 16.08.2023.
//

#ifndef LEGACYRUNTIME_FIELDPARSER_H
#define LEGACYRUNTIME_FIELDPARSER_H


#include "../Core/AbstractToken.h"
#include "AbstractParser.h"
#include "../Core/FieldToken.h"

class FieldParser : public AbstractParser{
    AbstractToken * ParseToken(std::vector<char>) override;
};


#endif //LEGACYRUNTIME_FIELDPARSER_H
