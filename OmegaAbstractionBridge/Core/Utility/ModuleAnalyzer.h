//
// Created by Danil on 13.08.2023.
//

#ifndef LEGACYRUNTIME_MODULEANALYZER_H
#define LEGACYRUNTIME_MODULEANALYZER_H


#include "../../../OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h"
#include "../../../OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/Module.h"

class ModuleAnalyzer {
public:
    static Module AnalyzeModule(Stack, void*);
};


#endif //LEGACYRUNTIME_MODULEANALYZER_H
