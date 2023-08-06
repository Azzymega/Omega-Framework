//
// Created by Danil on 04.08.2023.
//

#include "SILoad.h"

#include <utility>
#include "../CTS/Integer.h"

Word SILoad::PerformOperation() {
    static_cast<class Runtime*>(Runtime)->
            PushToStack(static_cast<class Runtime*>(Runtime)->
                    ReturnRegisters()->GetNote(reinterpret_cast<Integer*>(Operands[0]->ReturnParameter())->ReturnData()));
    return 0;
}

SILoad::SILoad(std::vector<Parameter *> unnamed, void *unnamed1) : Command(std::move(unnamed), unnamed1) {

}
