//
// Created by Danil on 31.07.2023.
//

#include "Runtime.h"

void Runtime::Execute() {
    for (InstructionPointer = 0; InstructionPointer < Operations.size(); InstructionPointer++) {
        Operations[InstructionPointer]->PerformOperation(Operations[InstructionPointer]->ReturnFirstArgument().ReturnData(),Operations[InstructionPointer]->ReturnSecondArgument().ReturnData());
    }
}

std::vector<Archive *> *Runtime::ReturnMemory() {
    return &Memory;
}

Runtime::Runtime() {
    this->SCM = SystemCallManager();
    this->InstructionPointer = 0;
    this->Roll = Registry();
}

Registry* Runtime::ReturnRegisters() {
    return &Roll;
}

int Runtime::GetInstructionPointer() const {
    return InstructionPointer;
}

void Runtime::SetInstructionPointer(int instructionPointer) {
    this->InstructionPointer = instructionPointer;
}

void Runtime::AddOperation(Operation * Operation) {
    this->Operations.push_back(Operation);
}

SystemCallManager *Runtime::ReturnSystemCallManager() {
    return &SCM;
}

Word Runtime::GetStackTop() {
    return Stack.top();
}

void Runtime::PopStack() {
    Stack.pop();
}

void Runtime::PushToStack(Word Data) {
    Stack.push(Data);
}

