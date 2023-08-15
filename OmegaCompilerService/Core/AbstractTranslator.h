//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_ABSTRACTTRANSLATOR_H
#define LEGACYRUNTIME_ABSTRACTTRANSLATOR_H


#include "../../OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h"
#include "Token.h"

class AbstractTranslator {
public:
    virtual Stack Translate(Token) = 0;
};


#endif //LEGACYRUNTIME_ABSTRACTTRANSLATOR_H
