//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_OPERATION_H
#define LIBRNT_OPERATION_H


#include "../ArchitecturalDefines/RegistersType.h"
#include "../PrimitiveDataTypes/Cell.h"
#include "../../Runtime/Core/Runtime.h"

class Operation {
protected:
    Runtime* Runtime;
    Cell FirstArgument{};
    Cell SecondArgument{};
public:
    virtual Word PerformOperation(Word,Word) = 0;
    Operation(Cell,Cell,class Runtime*);
    Cell ReturnFirstArgument();
    Cell ReturnSecondArgument();
};


#endif //LIBRNT_OPERATION_H
