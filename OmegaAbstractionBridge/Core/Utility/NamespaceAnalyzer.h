//
// Created by Danil on 12.08.2023.
//

#ifndef LEGACYRUNTIME_NAMESPACEANALYZER_H
#define LEGACYRUNTIME_NAMESPACEANALYZER_H


#include "../../../OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Namespace.h"
#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Stack.h"
#include "ObjectAnalyzer.h"

class NamespaceAnalyzer {
public:
    static Namespace AnalyzeNamespace(Stack, void*);
};


#endif //LEGACYRUNTIME_NAMESPACEANALYZER_H
