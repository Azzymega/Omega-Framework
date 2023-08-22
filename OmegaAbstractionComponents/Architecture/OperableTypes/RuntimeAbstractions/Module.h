//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_MODULE_H
#define LEGACYRUNTIME_MODULE_H


#include "Namespace.h"

class Module {
private:
    std::string Name;
    std::vector<Namespace> Namespaces;
public:
    Module(std::string, std::vector<Namespace>);
    std::vector<Namespace> ReturnNamespaces();
    int ReturnProgramIndex();
    Method* ReturnMain();
};


#endif //LEGACYRUNTIME_MODULE_H
