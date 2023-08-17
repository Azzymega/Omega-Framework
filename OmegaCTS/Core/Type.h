//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_TYPE_H
#define LEGACYRUNTIME_TYPE_H


#include <vector>
#include "CTSObject.h"

class Type : public CTSObject{
protected:
    std::vector<CTSObject*> Internals;
public:
    void AppendInternals(CTSObject* Object);
    Type(TypeT currentType, std::wstring name);
    CTSObject* ReturnParameterByName(std::wstring ParameterName);
    CTSObject* ReturnParameterByIndex(int ParameterIndex);
};


#endif //LEGACYRUNTIME_TYPE_H
