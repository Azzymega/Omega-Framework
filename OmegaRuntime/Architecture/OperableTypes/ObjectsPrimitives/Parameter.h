//
// Created by Danil on 06.08.2023.
//

#ifndef LEGACYRUNTIME_PARAMETER_H
#define LEGACYRUNTIME_PARAMETER_H


#include <string>
#include <vector>
#include "../../../../OmegaCTS/Core/CTSObject.h"

class Parameter {
protected:
    std::string TypeName;
    int Number;
    std::vector<CTSObject*> IncludedTypes;
public:
    virtual CTSObject* ReturnParameter() = 0;
};


#endif //LEGACYRUNTIME_PARAMETER_H
