//
// Created by Danil on 01.08.2023.
//

#include <iostream>
#include "CMV.h"
#include "../../Runtime/Core/Runtime.h"

CMV::CMV(Cell unnamed1, Cell unnamed2, struct Runtime * Runtime) : Operation(unnamed1, unnamed2, Runtime){
}

Word CMV::PerformOperation(Word Register, Word Value) {
    static_cast<class Runtime*>(Runtime)->ReturnRegisters()->SetNote(Register,Value);
    return 0;
}
