//
// Created by Danil on 03.08.2023.
//

#include "Assembly.h"

#include <utility>

void Assembly::ExecuteMain() {
    this->CurrentModule->ReturnMain()->Execute();
}

Assembly::Assembly(std::wstring Name, Module* Mod){
    this->Name = std::move(Name);
    this->CurrentModule = Mod;
}

std::vector<Object> Assembly::ReturnAllAssemblyMetadata() {
    std::vector<Object> FullMetadata;
    for (Namespace CurrentNamespace : CurrentModule->ReturnNamespaces()) {
        for ( const Object& CurrentObject : CurrentNamespace.ReturnObjects()) {
            FullMetadata.push_back(CurrentObject);
        }
    }
    return FullMetadata;
}

std::wstring Assembly::ReturnName() {
    return Name;
}
