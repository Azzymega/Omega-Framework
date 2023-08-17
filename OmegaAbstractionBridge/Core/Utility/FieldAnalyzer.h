//
// Created by Danil on 09.08.2023.
//

#ifndef LEGACYRUNTIME_FIELDANALYZER_H
#define LEGACYRUNTIME_FIELDANALYZER_H


#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Stack.h"
#include "../../../OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Field.h"

class FieldAnalyzer {
public:
    static Field* AnalyzeField(Stack, void*);
};


#endif //LEGACYRUNTIME_FIELDANALYZER_H
