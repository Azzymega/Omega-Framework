//
// Created by Danil on 06.08.2023.
//

#ifndef LEGACYRUNTIME_PARAMETER_H
#define LEGACYRUNTIME_PARAMETER_H


#include "../../CTS/Type.h"

class Parameter {
public:
    virtual Type* ReturnParameter() = 0;
};


#endif //LEGACYRUNTIME_PARAMETER_H