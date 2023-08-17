//
// Created by Danil on 04.08.2023.
//

#ifndef LEGACYRUNTIME_COMMAND_H
#define LEGACYRUNTIME_COMMAND_H

#include <vector>
#include "../PrimitiveDataTypes/Cell.h"
#include "../OperableTypes/ObjectsPrimitives/Parameter.h"

class Command {
protected:
    void* Runtime;
    std::vector<Parameter*> Operands;
public:
    virtual Word PerformOperation() = 0;
    Command(std::vector<Parameter*>,void*);
    Parameter * ReturnArguments(Word);
};



#endif //LEGACYRUNTIME_COMMAND_H
