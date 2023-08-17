//
// Created by Danil on 17.08.2023.
//

#include "SystemString.h"

SystemString::SystemString() : Type(OBJECT_WITH_FIELDS, std::wstring((L"System::String"))) {
    this->Internals.push_back(new PString());
}

void SystemString::SetString(std::wstring Data) {
    *reinterpret_cast<std::wstring*>(static_cast<PString *>(this->Internals[0])->ReturnData()) = Data;
}
