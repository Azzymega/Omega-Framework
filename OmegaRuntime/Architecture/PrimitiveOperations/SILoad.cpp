//
// Created by Danil on 04.08.2023.
//

#include "SILoad.h"

Word SILoad::PerformOperation() {
    static_cast<class Runtime*>(Runtime)->
            PushToStack(static_cast<class Runtime*>(Runtime)->
                    ReturnRegisters()->GetNote(this->Operands[0].ReturnData()));
    return 0;
}
