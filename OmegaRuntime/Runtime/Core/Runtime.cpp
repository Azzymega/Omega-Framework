//
// Created by Danil on 31.07.2023.
//

#include "Runtime.h"

void Runtime::Execute() {
    LoadedAssemblies[0].ExecuteMain();
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

SystemCallManager *Runtime::ReturnSystemCallManager() {
    return &SCM;
}

Type* Runtime::GetStackTop() {
    return MemoryController.GetTop();
}

void Runtime::PopStack() {
    MemoryController.PopStack();
}

void Runtime::PushToStack(Type* Data) {
    MemoryController.PushToStack(Data);
}

void Runtime::LoadAssembly(Assembly Assembly) {
    this->LoadedAssemblies.push_back(Assembly);
}

Type* Runtime::GetTopAndPop() {
    Type* x = MemoryController.GetTop();
    PopStack();
    return x;
}

int Runtime::ReturnStackLength() {
    return this->MemoryController.ReturnStackLength();
}

CTS *Runtime::ReturnCTS() {
    return &this->CommonTypeSystem;
}

