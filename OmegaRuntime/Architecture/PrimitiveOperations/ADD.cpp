//
// Created by Danil on 31.07.2023.
//

#include "ADD.h"
#include "../../Runtime/Core/Runtime.h"

ADD::ADD(Cell unnamed1, Cell unnamed2, struct Runtime * Runtime) : Operation(unnamed1, unnamed2, Runtime){
}

Word ADD::PerformOperation(Word Addable, Word Target) {
    static_cast<class Runtime*>(Runtime)->ReturnRegisters()->SetNote(Target,static_cast<class Runtime*>(Runtime)->ReturnRegisters()->GetNote(Addable)
    +static_cast<class Runtime*>(Runtime)->ReturnRegisters()->GetNote(Target));
    return 0;
}
