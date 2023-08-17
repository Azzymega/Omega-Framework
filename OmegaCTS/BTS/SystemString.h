//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_SYSTEMSTRING_H
#define LEGACYRUNTIME_SYSTEMSTRING_H


#include "../Core/Type.h"
#include "../Core/PString.h"

class SystemString : public Type{
public:
    SystemString(std::wstring name, PString String);
};


#endif //LEGACYRUNTIME_SYSTEMSTRING_H
