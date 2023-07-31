//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_RUNTIME_H
#define LIBRNT_RUNTIME_H


#include <vector>
#include "../../Architecture/PrimitiveAbstractions/Depository.h"
#include "../../Architecture/PrimitiveDataTypes//Stack.h"
#include "../../Architecture/PrimitiveAbstractions/Operation.h"
#include "../../Architecture/PrimitiveDataTypes/Registry.h"

class Runtime {
private:
    int InstructionPointer;
    Registry Roll;
    std::vector<Archive*> Memory;
    std::vector<Operation*> Operations;
public:
    Runtime();
    Registry ReturnRegisters();
    int GetInstructionPointer();
    void SetInstructionPointer(int);
    std::vector<Archive*>* ReturnMemory();
    void Execute();
};


#endif //LIBRNT_RUNTIME_H
