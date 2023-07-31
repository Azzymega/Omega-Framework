//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_ROM_H
#define LIBRNT_ROM_H


#include "../../Architecture/PrimitiveDataTypes/Stack.h"

class ROM : public Stack {
private:
    int InstructionPointer;
public:
    ROM();
    int ReturnInstructionPointer();
    void OffsetInstructionPointer(int);
    Word GetPointerData();
};


#endif //LIBRNT_ROM_H
