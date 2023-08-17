//
// Created by Danil on 13.08.2023.
//

#ifndef LEGACYRUNTIME_ASSEMBLYANALYZER_H
#define LEGACYRUNTIME_ASSEMBLYANALYZER_H


#include "../../../OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/Assembly.h"
#include "../../../OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h"

class AssemblyAnalyzer {
    static Assembly AnalyzeAssembly(Stack, void*);
};


#endif //LEGACYRUNTIME_ASSEMBLYANALYZER_H
