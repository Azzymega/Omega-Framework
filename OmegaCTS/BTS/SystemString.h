//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_SYSTEMSTRING_H
#define LEGACYRUNTIME_SYSTEMSTRING_H


#include "../Core/Type.h"
#include "../Primitives/PString.h"

class SystemString : public Type{
public:
    SystemString();
    void SetString(std::wstring Data);
};


#endif //LEGACYRUNTIME_SYSTEMSTRING_H
