//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_FIELD_H
#define LEGACYRUNTIME_FIELD_H


#include <string>
#include "../../CTS/Type.h"

class Field {
protected:
    Type* Type;
    std::string Name;
public:
    Field(class Type*,std::string);
};


#endif //LEGACYRUNTIME_FIELD_H
