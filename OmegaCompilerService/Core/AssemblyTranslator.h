//
// Created by Danil on 14.08.2023.
//

#ifndef LEGACYRUNTIME_ASSEMBLYTRANSLATOR_H
#define LEGACYRUNTIME_ASSEMBLYTRANSLATOR_H


#include <string>
#include "../../OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h"
#include "Token.h"
#include "AbstractTranslator.h"

class AssemblyTranslator  : public AbstractTranslator{
public:
    Stack Translate(Token) override;
};


#endif //LEGACYRUNTIME_ASSEMBLYTRANSLATOR_H
