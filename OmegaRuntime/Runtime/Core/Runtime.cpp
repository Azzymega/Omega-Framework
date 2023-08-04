//
// Created by Danil on 31.07.2023.
//

#include "Runtime.h"

void Runtime::Execute() {
    LoadedAssemblies[0].ExecuteMain();
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

void Runtime::AddOperation(Command * Operation) {
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

void Runtime::LoadAssembly(Assembly Assembly) {
    this->LoadedAssemblies.push_back(Assembly);
}

Word Runtime::GetTopAndPop() {
    int x = Stack.top();
    Stack.pop();
    return x;
}

