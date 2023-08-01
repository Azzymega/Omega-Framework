//
// Created by Danil on 31.07.2023.
//

#include "ROM.h"

int ROM::ReturnInstructionPointer() {
    return InstructionPointer;
}

void ROM::OffsetInstructionPointer(int Offset) {
    InstructionPointer+=Offset;
}

ROM::ROM() {
    this->InstructionPointer = 0;
}

Word ROM::GetPointerData() {
    return GetCell(InstructionPointer).ReturnData();
}
