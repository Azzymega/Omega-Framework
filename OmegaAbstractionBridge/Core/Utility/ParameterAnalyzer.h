//
// Created by Danil on 06.08.2023.
//

#ifndef LEGACYRUNTIME_PARAMETERANALYZER_H
#define LEGACYRUNTIME_PARAMETERANALYZER_H


#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Stack.h"
#include "../../../OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Parameter.h"
#include <string>

class ParameterAnalyzer {
public:
    static Parameter AnalyzeParameter(Stack, void*);
};


#endif //LEGACYRUNTIME_PARAMETERANALYZER_H
