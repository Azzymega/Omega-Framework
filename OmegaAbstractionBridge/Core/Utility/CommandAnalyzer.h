//
// Created by Danil on 06.08.2023.
//

#ifndef LEGACYRUNTIME_COMMANDANALYZER_H
#define LEGACYRUNTIME_COMMANDANALYZER_H


#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Command.h"
#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Stack.h"
#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Command.h"

class CommandAnalyzer {
public:
    static Command* AnalyzeCommand(Stack, void*);
};


#endif //LEGACYRUNTIME_COMMANDANALYZER_H
