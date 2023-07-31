//
// Created by Danil on 31.07.2023.
//

#include "Runtime.h"
#include "../DataTypes/ROM.h"
#include <typeinfo>

void Runtime::Execute() {
    Stack* Firmware; // Убрать
    for (Archive* Stack : Memory) {
        if (typeid(*Stack) == typeid(ROM)){
            Firmware = static_cast<class Stack *>(Stack);
            break;
        }
    }
    for (InstructionPointer = 0; InstructionPointer < Operations.size(); InstructionPointer++) {
        Operations[InstructionPointer]->PerformOperation(Operations[InstructionPointer]->ReturnFirstArgument().ReturnData(),
        Operations[InstructionPointer]->ReturnSecondArgument().ReturnData());
    }
}

std::vector<Archive *> *Runtime::ReturnMemory() {
    return &Memory;
}

Runtime::Runtime() {
    this->InstructionPointer = 0;
    this->Roll = Registry();
}

Registry Runtime::ReturnRegisters() {
    return Roll;
}

int Runtime::GetInstructionPointer() {
    return InstructionPointer;
}

void Runtime::SetInstructionPointer(int InstructionPointer) {
    this->InstructionPointer = InstructionPointer;
}

