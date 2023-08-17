//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_CTSOBJECT_H
#define LEGACYRUNTIME_CTSOBJECT_H


#include <string>
#include "ArchitecturalDefines.h"

class CTSObject {
protected:
    TypeT CurrentType;
    std::wstring Name;
public:
    CTSObject(TypeT CurrentType, std::wstring Name);
    std::wstring ReturnName();
};


#endif //LEGACYRUNTIME_CTSOBJECT_H
