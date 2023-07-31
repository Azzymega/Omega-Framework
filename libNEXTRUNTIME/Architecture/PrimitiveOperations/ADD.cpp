//
// Created by Danil on 31.07.2023.
//

#include "ADD.h"

ADD::ADD(Cell unnamed1, Cell unnamed2, struct Runtime * Runtime) : Operation(unnamed1,unnamed2,Runtime){
}

Word ADD::PerformOperation(Word Addable, Word Target) {
    Runtime->ReturnRegisters().SetNote(Target,Runtime->ReturnRegisters().GetNote(Addable)
    +Runtime->ReturnRegisters().GetNote(Target));
}
