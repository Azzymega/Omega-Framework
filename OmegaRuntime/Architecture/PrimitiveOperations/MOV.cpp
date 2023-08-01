//
// Created by Danil on 31.07.2023.
//

#include "MOV.h"
#include "../../Runtime/Core/Runtime.h"

MOV::MOV(Cell unnamed, Cell unnamed1, struct Runtime * Runtime) : Operation(unnamed, unnamed1, Runtime) {

}

Word MOV::PerformOperation(Word Index, Word Value) {
    static_cast<class Runtime*>(Runtime)->ReturnRegisters()->AddNote(Index,Value);
    return 0;
}
