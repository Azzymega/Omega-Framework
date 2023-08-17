//
// Created by Danil on 06.08.2023.
//

#ifndef LEGACYRUNTIME_PARAMETER_H
#define LEGACYRUNTIME_PARAMETER_H


#include <string>
#include <vector>
#include "../../../../OmegaCTS/Core/Type.h"

class Parameter : public Type{
protected:
    std::wstring Name;
    int Number;
public:
    Parameter(std::wstring TypeName,std::wstring Name, int Number);
};


#endif //LEGACYRUNTIME_PARAMETER_H
