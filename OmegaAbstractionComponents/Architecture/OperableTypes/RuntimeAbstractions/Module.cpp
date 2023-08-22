//
// Created by Danil on 03.08.2023.
//

#include "Module.h"

int Module::ReturnProgramIndex() {
    for (int i = 0; i < (int)Namespaces.size(); ++i) {
        if (Namespaces[i].ReturnName() == L"Main"){
            return i;
        }
    }
    return 0;
}

Method *Module::ReturnMain() {
    return this->Namespaces[this->ReturnProgramIndex()].ReturnMainClassObject().ReturnMain();
}

Module::Module(std::string Name, std::vector<Namespace> Namespaces) {
    this->Namespaces = Namespaces;
    this->Name = Name;
}

std::vector<Namespace> Module::ReturnNamespaces() {
    return Namespaces;
}
