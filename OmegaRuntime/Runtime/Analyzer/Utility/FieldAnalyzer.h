//
// Created by Danil on 09.08.2023.
//

#ifndef LEGACYRUNTIME_FIELDANALYZER_H
#define LEGACYRUNTIME_FIELDANALYZER_H


#include "../../../Architecture/PrimitiveDataTypes/Stack.h"
#include "../../../Architecture/OperableTypes/ObjectsPrimitives/Field.h"

class FieldAnalyzer {
    static Field* AnalyzeField(Stack, void*);
};


#endif //LEGACYRUNTIME_FIELDANALYZER_H
