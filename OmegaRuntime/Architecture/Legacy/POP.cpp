//
// Created by Danil on 01.08.2023.
//

#include "POP.h"
#include "../../Runtime/Core/Runtime.h"

POP::POP(Cell unnamed, struct Runtime * Runtime) : Operation(unnamed, 0, Runtime) {

}

Word POP::PerformOperation(Word RegistryCode, Word) {
    static_cast<class Runtime*>(Runtime)->ReturnRegisters()->SetNote(RegistryCode,
            static_cast<class Runtime*>(Runtime)->GetStackTop());
    static_cast<class Runtime*>(Runtime)->PopStack();
    return 0;
}
