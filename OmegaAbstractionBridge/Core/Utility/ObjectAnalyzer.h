//
// Created by Danil on 09.08.2023.
//

#ifndef LEGACYRUNTIME_OBJECTANALYZER_H
#define LEGACYRUNTIME_OBJECTANALYZER_H


#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Stack.h"
#include "../../../OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/ObjectIdentifier.h"
#include "../../../OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Namespace.h"

class ObjectAnalyzer {
public:
    static Object* AnalyzeObject(Stack, void*, void*);
};


#endif //LEGACYRUNTIME_OBJECTANALYZER_H
