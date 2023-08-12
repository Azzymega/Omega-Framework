//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_REGISTRY_H
#define LIBRNT_REGISTRY_H


#include <map>
#include "../PrimitiveAbstractions/Archive.h"
#include "../ArchitecturalDefines/RegistersType.h"
#include "../../Architecture/CTS/Type.h"

class Registry : public Archive{
private:
    int Counter;
    std::map<int,Type*> Data;
public:
    Registry();
    void AppendCounter();
    int ReturnCounter();
    void AddNote(int,Type*);
    void SetNote(int,Type*);
    Type* GetNote(int);
};


#endif //LIBRNT_REGISTRY_H
