//
// Created by Danil on 31.07.2023.
//

#include "JMP.h"

JMP::JMP(Cell u1, Cell u2, struct Runtime * u3) : Operation(u1,u2,u3){

}

Word JMP::PerformOperation(Word JumpStringNumber, Word) {
    Runtime->SetInstructionPointer(JumpStringNumber);
}
