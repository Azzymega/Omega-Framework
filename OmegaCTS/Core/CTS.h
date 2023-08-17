//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_CTS_H
#define LEGACYRUNTIME_CTS_H


#include <map>
#include <string>
#include "Type.h"
#include "../../OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/ObjectIdentifier.h"

class CTS {
private:
    std::map<std::wstring,Type*> TypeList;
    Type* ConstructType(Object);
public:
    CTS();
    void AppendType(Object);
    Type* ReturnAllocatedType(const std::wstring& TypeName);
};


#endif //LEGACYRUNTIME_CTS_H
