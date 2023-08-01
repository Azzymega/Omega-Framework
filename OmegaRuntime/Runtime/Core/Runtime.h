//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_RUNTIME_H
#define LIBRNT_RUNTIME_H

#include <vector>
#include "../../Architecture/PrimitiveAbstractions/Depository.h"
#include "../../Architecture/PrimitiveDataTypes//Stack.h"
#include "../../Architecture/PrimitiveAbstractions/Operation.h"
#include "../DataTypes/ROM.h"
#include "../../Architecture/PrimitiveDataTypes/Registry.h"
#include "../../../OmegaSoftwareALComponent/Manager/SystemCallManager.h"

class Runtime {
private:
    SystemCallManager SCM;
    int InstructionPointer;
    Registry Roll;
    std::vector<Archive*> Memory;
    std::vector<Operation*> Operations;
public:
    Runtime();
    Registry* ReturnRegisters();
    void AddOperation(Operation*);
    int GetInstructionPointer() const;
    void SetInstructionPointer(int);
    std::vector<Archive*>* ReturnMemory();
    SystemCallManager* ReturnSystemCallManager();
    void Execute();
};


#endif //LIBRNT_RUNTIME_H
