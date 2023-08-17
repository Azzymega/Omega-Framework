//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_SYSTEMINTEGER_H
#define LEGACYRUNTIME_SYSTEMINTEGER_H


#include <string>
#include "../Primitives/PInteger.h"
#include "../Core/Type.h"

class SystemInteger : public Type{
public:
    SystemInteger();
    int ReturnInt();
    void SetInt(int Data);
};


#endif //LEGACYRUNTIME_SYSTEMINTEGER_H
