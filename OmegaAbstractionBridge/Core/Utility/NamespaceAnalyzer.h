//
// Created by Danil on 12.08.2023.
//

#ifndef LEGACYRUNTIME_NAMESPACEANALYZER_H
#define LEGACYRUNTIME_NAMESPACEANALYZER_H


#include "../../../OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/Namespace.h"
#include "../../../OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h"
#include "ObjectAnalyzer.h"

class NamespaceAnalyzer {
public:
    static Namespace AnalyzeNamespace(Stack, void*);
};


#endif //LEGACYRUNTIME_NAMESPACEANALYZER_H
