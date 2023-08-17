//
// Created by Danil on 17.08.2023.
//

#include "SystemString.h"

SystemString::SystemString(std::wstring name, PString String) : Type(OBJECT_WITH_FIELDS, name) {
    this->Internals.push_back(&String);
}
