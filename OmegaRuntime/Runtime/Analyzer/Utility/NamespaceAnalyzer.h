//
// Created by Danil on 12.08.2023.
//

#ifndef LEGACYRUNTIME_NAMESPACEANALYZER_H
#define LEGACYRUNTIME_NAMESPACEANALYZER_H


#include "../../../Architecture/OperableTypes/Namespace.h"
#include "../../../Architecture/PrimitiveDataTypes/Stack.h"
#include "ObjectAnalyzer.h"

class NamespaceAnalyzer {
public:
    static Namespace* AnalyzeObject(Stack, void*);
};


#endif //LEGACYRUNTIME_NAMESPACEANALYZER_H
