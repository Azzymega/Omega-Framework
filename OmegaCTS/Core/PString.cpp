//
// Created by Danil on 17.08.2023.
//

#include "PString.h"

void *PString::ReturnData() {
    return &Data;
}

PString::PString(std::wstring name, std::wstring Data) : PrimitiveReturnables(PRIMITIVE_WSTRING, name) {
    this->Data = Data;
}
