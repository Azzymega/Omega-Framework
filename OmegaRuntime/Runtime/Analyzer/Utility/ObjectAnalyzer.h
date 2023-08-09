//
// Created by Danil on 09.08.2023.
//

#ifndef LEGACYRUNTIME_OBJECTANALYZER_H
#define LEGACYRUNTIME_OBJECTANALYZER_H


#include "../../../Architecture/PrimitiveDataTypes/Stack.h"
#include "../../../Architecture/OperableTypes/ObjectIdentifier.h"

class ObjectAnalyzer {
    static Object* AnalyzeObject(Stack, void*,void*);
};


#endif //LEGACYRUNTIME_OBJECTANALYZER_H
