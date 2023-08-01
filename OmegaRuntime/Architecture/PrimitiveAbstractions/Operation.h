//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_OPERATION_H
#define LIBRNT_OPERATION_H

#include "../ArchitecturalDefines/RegistersType.h"
#include "../PrimitiveDataTypes/Cell.h"

class Operation {
protected:
    void* Runtime;
    Cell FirstArgument;
    Cell SecondArgument;
public:
    virtual Word PerformOperation(Word,Word) = 0;
    Operation(Cell,Cell,void*);
    Cell ReturnFirstArgument();
    Cell ReturnSecondArgument();
};


#endif //LIBRNT_OPERATION_H
