//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_SYSTEMINTEGER_H
#define LEGACYRUNTIME_SYSTEMINTEGER_H


#include <string>
#include "../Core/PInteger.h"
#include "../Core/Type.h"

class SystemInteger : public Type{
public:
    SystemInteger(PInteger Integer);
    int ReturnInt();
};


#endif //LEGACYRUNTIME_SYSTEMINTEGER_H
