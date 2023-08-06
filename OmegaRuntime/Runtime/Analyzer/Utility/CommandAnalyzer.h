//
// Created by Danil on 06.08.2023.
//

#ifndef LEGACYRUNTIME_COMMANDANALYZER_H
#define LEGACYRUNTIME_COMMANDANALYZER_H


#include "../../../Architecture/PrimitiveAbstractions/Command.h"
#include "../../../Architecture/PrimitiveDataTypes/Stack.h"

class CommandAnalyzer {
public:
    Command* AnalyzeCommand(Stack, void*);
};


#endif //LEGACYRUNTIME_COMMANDANALYZER_H
