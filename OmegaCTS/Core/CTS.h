//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_CTS_H
#define LEGACYRUNTIME_CTS_H


#include <map>

#include <string>
#include "Type.h"
#include "../../OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Object.h"
#include "../../OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Assembly.h"

class CTS {
private:
    std::map<std::wstring,Type*> TypeList;
    static Type* ConstructType(Object);
public:
    CTS();
    void AppendType(Object);
    void InitializeAssemblyTypeSystem(Assembly);
    Type* ReturnAllocatedType(const std::wstring& TypeName);
};


#endif //LEGACYRUNTIME_CTS_H
