//
// Created by Danil on 17.08.2023.
//

#include "SystemString.h"

SystemString::SystemString() : Type(OBJECT_WITH_FIELDS, std::wstring(
        reinterpret_cast<const wchar_t *>("System::String"))) {
    this->Internals.push_back(new PString());
}

void SystemString::SetString(std::wstring Data) {
    *reinterpret_cast<std::wstring*>(static_cast<PString *>(this->Internals[0])->ReturnData()) = Data;
}
