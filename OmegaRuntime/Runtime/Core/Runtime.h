//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_RUNTIME_H
#define LIBRNT_RUNTIME_H

#include <vector>
#include <stack>
#include "../../Architecture/PrimitiveAbstractions/Depository.h"
#include "../../Architecture/PrimitiveDataTypes//Stack.h"
#include "../DataTypes/ROM.h"
#include "../../Architecture/PrimitiveDataTypes/Registry.h"
#include "../../../OmegaSoftwareALComponent/Manager/SystemCallManager.h"
#include "../../Architecture/OperableTypes/Assembly.h"
#include "../../Architecture/PrimitiveAbstractions/Command.h"

class Runtime {
private:
    std::vector<Assembly> LoadedAssemblies;
    SystemCallManager SCM;
    Registry Roll;
    std::stack<Type*> Stack;
    int InstructionPointer;
    std::vector<Archive*> Memory;
    std::vector<Command*> Operations;
public:
    Runtime();
    void LoadAssembly(Assembly);
    Registry* ReturnRegisters();
    void AddOperation(Command*);
    int GetInstructionPointer() const;
    void SetInstructionPointer(int);
    std::vector<Archive*>* ReturnMemory();
    SystemCallManager* ReturnSystemCallManager();
    Type* GetStackTop();
    Type* GetTopAndPop();
    void PopStack();
    void PushToStack(Type*);
    void Execute();
};


#endif //LIBRNT_RUNTIME_H
