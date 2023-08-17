//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_FIELD_H
#define LEGACYRUNTIME_FIELD_H


#include <string>
#include "../../../../OmegaCTS/Core/CTSObject.h"

class Field {
protected:
    CTSObject* Type;
    std::string Name;
public:
    CTSObject* ReturnType();
    Field(class Type*,std::string);
};


#endif //LEGACYRUNTIME_FIELD_H
