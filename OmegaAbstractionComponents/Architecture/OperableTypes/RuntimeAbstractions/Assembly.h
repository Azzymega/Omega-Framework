//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_ASSEMBLY_H
#define LEGACYRUNTIME_ASSEMBLY_H


#include "Module.h"

class Assembly {
private:
    std::wstring Name;
    Module* CurrentModule;
public:
    void ExecuteMain();
    Assembly(std::wstring Name,Module*);
    std::wstring ReturnName();
    std::vector<Object> ReturnAllAssemblyMetadata();
};


#endif //LEGACYRUNTIME_ASSEMBLY_H
