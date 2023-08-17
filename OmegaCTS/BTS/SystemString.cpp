//
// Created by Danil on 17.08.2023.
//

#include "SystemString.h"

SystemString::SystemString(PString String) : Type(OBJECT_WITH_FIELDS, std::wstring(
        reinterpret_cast<const wchar_t *>("System::String"))) {
    this->Internals.push_back(&String);
}
