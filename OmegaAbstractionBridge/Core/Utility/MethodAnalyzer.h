//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_METHODANALYZER_H
#define LEGACYRUNTIME_METHODANALYZER_H


#include "../../../OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h"
#include "../../../OmegaRuntime/Architecture/OperableTypes/ObjectsPrimitives/Method.h"
#include "ParameterAnalyzer.h"

class MethodAnalyzer {
public:
    static Method AnalyzeMethod(Stack,void*);
};


#endif //LEGACYRUNTIME_METHODANALYZER_H
