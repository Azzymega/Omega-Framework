//
// Created by Danil on 04.08.2023.
//

#include "Sload.h"

Word Sload::PerformOperation() {
    static_cast<class Runtime*>(Runtime)->PushToStack(Operands[0].ReturnData());
    return 0;
}
