//
// Created by Danil on 17.08.2023.
//

#include "SystemInteger.h"

int SystemInteger::ReturnInt() {
    return *reinterpret_cast<int*>(static_cast<PInteger *>(this->Internals[0])->ReturnData());
}

void SystemInteger::SetInt(int Data) {
    *reinterpret_cast<int*>(static_cast<PInteger *>(this->Internals[0])->ReturnData()) = Data;
}

SystemInteger::SystemInteger() : Type(OBJECT_WITH_FIELDS, std::wstring(
        reinterpret_cast<const wchar_t *>("System::Integer"))) {
    this->Internals.push_back(new PInteger());
}
