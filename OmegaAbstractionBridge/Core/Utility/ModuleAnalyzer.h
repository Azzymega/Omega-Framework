//
// Created by Danil on 13.08.2023.
//

#ifndef LEGACYRUNTIME_MODULEANALYZER_H
#define LEGACYRUNTIME_MODULEANALYZER_H


#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Stack.h"
#include "../../../OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Module.h"

class ModuleAnalyzer {
public:
    static Module AnalyzeModule(Stack, void*);
};


#endif //LEGACYRUNTIME_MODULEANALYZER_H
