//
// Created by Danil on 31.07.2023.
//

#include "JMP.h"
#include "../../Runtime/Core/Runtime.h"

JMP::JMP(Cell u1, Cell u2, struct Runtime * u3) : Operation(u1, u2, u3){

}

Word JMP::PerformOperation(Word JumpStringNumber, Word) {
    static_cast<class Runtime*>(Runtime)->SetInstructionPointer(JumpStringNumber);
    return 0;
}
