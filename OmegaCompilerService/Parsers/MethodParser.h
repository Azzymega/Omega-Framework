//
// Created by Danil on 16.08.2023.
//

#ifndef LEGACYRUNTIME_METHODPARSER_H
#define LEGACYRUNTIME_METHODPARSER_H

#include "AbstractParser.h"
#include "../Core/MethodToken.h"

class MethodParser : public AbstractParser{
    AbstractToken * ParseToken(std::vector<char>) override;
};


#endif //LEGACYRUNTIME_METHODPARSER_H
