//
// Created by Danil on 31.07.2023.
//

#include "MOV.h"

MOV::MOV(Cell unnamed, Cell unnamed1, struct Runtime * Runtime) : Operation(unnamed, unnamed1, Runtime) {

}

Word MOV::PerformOperation(Word Index, Word Value) {
    Runtime->ReturnRegisters().AddNote(Index,Value);
}
