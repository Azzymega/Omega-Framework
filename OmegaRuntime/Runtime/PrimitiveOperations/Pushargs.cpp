//
// Created by Danil on 22.08.2023.
//

#include "Pushargs.h"

#include <utility>

Pushargs::Pushargs(std::vector<Parameter *> unnamed, void *unnamed1) : Command(std::move(unnamed), unnamed1) {

}

Word Pushargs::PerformOperation() {
    Type CurrentType = *static_cast<class Runtime*>(CurrentRuntime)->GetStackTop();
    static_cast<class Runtime*>(CurrentRuntime)->PopStack();
    Type* Parameter = static_cast<class Runtime*>(CurrentRuntime)->ReturnCTS()->
            ReturnAllocatedType(Operands[0]->ReturnName());
    Parameter->AppendInternals(Operands[1]);
    CurrentType.ChangeParameterByName(Parameter);
    Type* ReturnableType = new Type(CurrentType);
    static_cast<class Runtime*>(CurrentRuntime)->PushToStack(ReturnableType);
}
