//
// Created by Danil on 13.08.2023.
//

#ifndef LEGACYRUNTIME_ASSEMBLYANALYZER_H
#define LEGACYRUNTIME_ASSEMBLYANALYZER_H


#include "../../../Architecture/OperableTypes/Assembly.h"
#include "../../../Architecture/PrimitiveDataTypes/Stack.h"

class AssemblyAnalyzer {
    static Assembly AnalyzeAssembly(Stack, void*);
};


#endif //LEGACYRUNTIME_ASSEMBLYANALYZER_H
