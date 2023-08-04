//
// Created by Danil on 01.08.2023.
//

#include "PSH.h"
#include "../../Runtime/Core/Runtime.h"

PSH::PSH(Cell unnamed, struct Runtime * Runtime) : Operation(unnamed, 0, Runtime) {

}

Word PSH::PerformOperation(Word Data, Word) {
    static_cast<class Runtime*>(Runtime)->PushToStack(Data);
    return 0;
}
