//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_PARAMETERPARSER_H
#define LEGACYRUNTIME_PARAMETERPARSER_H


#include "AbstractParser.h"

class ParameterParser : public AbstractParser{
public:
    AbstractToken * ParseToken(std::vector<char>) override;
};


#endif //LEGACYRUNTIME_PARAMETERPARSER_H
