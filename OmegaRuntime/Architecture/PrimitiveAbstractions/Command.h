//
// Created by Danil on 04.08.2023.
//

#ifndef LEGACYRUNTIME_COMMAND_H
#define LEGACYRUNTIME_COMMAND_H

#include <vector>
#include "../PrimitiveDataTypes/Cell.h"

class Command {
protected:
    void* Runtime;
    std::vector<Cell> Operands;
public:
    virtual Word PerformOperation() = 0;
    Command(std::vector<Cell>,void*);
    Cell ReturnArguments(Word);
};



#endif //LEGACYRUNTIME_COMMAND_H
