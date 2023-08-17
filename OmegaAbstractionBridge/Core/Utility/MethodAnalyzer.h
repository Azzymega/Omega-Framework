//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_METHODANALYZER_H
#define LEGACYRUNTIME_METHODANALYZER_H


#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Stack.h"
#include "../../../OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Method.h"
#include "ParameterAnalyzer.h"

class MethodAnalyzer {
public:
    static Method AnalyzeMethod(Stack,void*);
};


#endif //LEGACYRUNTIME_METHODANALYZER_H
