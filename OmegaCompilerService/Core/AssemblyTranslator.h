//
// Created by Danil on 14.08.2023.
//

#ifndef LEGACYRUNTIME_ASSEMBLYTRANSLATOR_H
#define LEGACYRUNTIME_ASSEMBLYTRANSLATOR_H


#include <string>
#include "../../OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h"

class AssemblyTranslator {
public:
    static Stack TranslateAssembly(std::string);
};


#endif //LEGACYRUNTIME_ASSEMBLYTRANSLATOR_H
