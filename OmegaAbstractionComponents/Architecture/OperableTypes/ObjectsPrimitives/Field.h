//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_FIELD_H
#define LEGACYRUNTIME_FIELD_H


#include <string>
#include "../../../../OmegaCTS/Core/Type.h"

class Field {
protected:
    Type* Type;
    std::wstring Name;
public:
    CTSObject* ReturnType();
    Field(class Type*,std::wstring);
};


#endif //LEGACYRUNTIME_FIELD_H
