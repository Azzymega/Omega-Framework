//
// Created by Danil on 01.08.2023.
//

#ifndef LEGACYRUNTIME_FUNCTION_H
#define LEGACYRUNTIME_FUNCTION_H


#include <string>
#include <queue>
#include "../PrimitiveAbstractions/Operation.h"
#include "Object.h"

class Function : public Object{
private:
    std::queue<Operation*> Operations;
public:
    Function(std::string);
    void AppendOperation(Operation*);
    Operation* ReturnOperation();
    Word ReturnOperationCount();
};


#endif //LEGACYRUNTIME_FUNCTION_H
