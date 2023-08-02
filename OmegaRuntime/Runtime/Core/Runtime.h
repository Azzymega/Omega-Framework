//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_RUNTIME_H
#define LIBRNT_RUNTIME_H

#include <vector>
#include <stack>
#include "../../Architecture/PrimitiveAbstractions/Depository.h"
#include "../../Architecture/PrimitiveDataTypes//Stack.h"
#include "../../Architecture/PrimitiveAbstractions/Operation.h"
#include "../DataTypes/ROM.h"
#include "../../Architecture/PrimitiveDataTypes/Registry.h"
#include "../../../OmegaSoftwareALComponent/Manager/SystemCallManager.h"
#include "../../Architecture/Abstractions/Function.h"

class Runtime {
private:
    SystemCallManager SCM;
    Registry Roll;
    std::stack<Word> Stack;
    int FunctionPointer;
    int InstructionPointer;
    std::vector<Archive*> Memory;
    std::vector<Function*> Functions;
public:
    Runtime();
    Registry* ReturnRegisters();
    void AddFunction(Function*);
    int GetInstructionPointer() const;
    void SetInstructionPointer(int);
    std::vector<Archive*>* ReturnMemory();
    SystemCallManager* ReturnSystemCallManager();
    Word GetStackTop();
    void PopStack();
    void PushToStack(Word);
    void Execute();
};


#endif //LIBRNT_RUNTIME_H
