//
// Created by Danil on 14.08.2023.
//

#ifndef LEGACYRUNTIME_ASSEMBLYTRANSLATOR_H
#define LEGACYRUNTIME_ASSEMBLYTRANSLATOR_H


#include <string>
#include "../../OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h"
#include "Token.h"

class AssemblyTranslator {
public:
    static Stack TranslateAssembly(Token);
};


#endif //LEGACYRUNTIME_ASSEMBLYTRANSLATOR_H
