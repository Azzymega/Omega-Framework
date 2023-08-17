//
// Created by Danil on 17.08.2023.
//

#include "CTSObject.h"

CTSObject::CTSObject(TypeT CurrentType, std::wstring Name) {
    this->CurrentType = CurrentType;
    this->Name = Name;
}

std::wstring CTSObject::ReturnName() {
    return this->Name;
}
