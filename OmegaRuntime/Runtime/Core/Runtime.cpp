//
// Created by Danil on 31.07.2023.
//

#include "Runtime.h"

void Runtime::Execute() {
    for (FunctionPointer = 0; FunctionPointer < Functions.size(); FunctionPointer++) {
        for (InstructionPointer = 0; InstructionPointer < Functions[FunctionPointer]->ReturnOperationCount() ; ++InstructionPointer) {
            Functions[FunctionPointer]->ReturnOperation()->PerformOperation(Functions[FunctionPointer]->ReturnOperation()->ReturnFirstArgument().ReturnData(),
                                                                            Functions[FunctionPointer]->ReturnOperation()->ReturnSecondArgument().ReturnData());
        }
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

void Runtime::AddFunction(Function * Function) {
    this->Functions.push_back(Function);
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

