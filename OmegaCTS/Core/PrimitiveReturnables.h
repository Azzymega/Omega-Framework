//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_PRIMITIVERETURNABLES_H
#define LEGACYRUNTIME_PRIMITIVERETURNABLES_H


#include "CTSObject.h"

class PrimitiveReturnables : public CTSObject{
public:
    PrimitiveReturnables(TypeT currentType, std::wstring name);
    virtual void* ReturnData() = 0;
};


#endif //LEGACYRUNTIME_PRIMITIVERETURNABLES_H
