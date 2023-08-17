//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_COMMANDPARAMETERANALYZER_H
#define LEGACYRUNTIME_COMMANDPARAMETERANALYZER_H


#include "../../../OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Parameter.h"
#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Stack.h"

class CommandParameterAnalyzer {
public:
    static Parameter AnalyzeParameter(const Stack&, void*);
};


#endif //LEGACYRUNTIME_COMMANDPARAMETERANALYZER_H
