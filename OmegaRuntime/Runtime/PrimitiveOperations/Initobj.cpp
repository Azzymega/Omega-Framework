//
// Created by Danil on 22.08.2023.
//

#include "Initobj.h"

Initobj::Initobj(std::vector<Parameter *> unnamed, void *unnamed1) : Command(std::move(unnamed), unnamed1) {

}

Word Initobj::PerformOperation() {
    std::wstring TypeName = this->Operands[0]->ReturnName();
    Type* AllocatedType;
    AllocatedType = static_cast<class Runtime*>(CurrentRuntime)->ReturnCTS()->ReturnAllocatedType(TypeName);
    static_cast<class Runtime*>(CurrentRuntime)->PushToStack(AllocatedType);
    return 0;
}
