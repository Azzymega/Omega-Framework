//
// Created by Danil on 04.08.2023.
//

#include "Sload.h"

Word Sload::PerformOperation() {
    static_cast<class Runtime*>(Runtime)->PushToStack(Operands[0].ReturnData());
    return 0;
}

Sload::Sload(std::vector<Parameter *> unnamed, void *unnamed1) : Command(unnamed, unnamed1) {

}
