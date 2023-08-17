//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_REGISTRY_H
#define LIBRNT_REGISTRY_H


#include <map>
#include "../PrimitiveAbstractions/Archive.h"
#include "../ArchitecturalDefines/Core/Core.h"
#include "../../../OmegaCTS/Core/CTSObject.h"

class Registry : public Archive{
private:
    int Counter;
    std::map<int,CTSObject*> Data;
public:
    Registry();
    void AppendCounter();
    int ReturnCounter();
    void AddNote(int, CTSObject*);
    void SetNote(int, CTSObject*);
    CTSObject* GetNote(int);
    void Clear();
};


#endif //LIBRNT_REGISTRY_H
