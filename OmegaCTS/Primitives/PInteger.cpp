//
// Created by Danil on 17.08.2023.
//

#include "PInteger.h"

void *PInteger::ReturnData() {
    return &Data;
}

PInteger::PInteger(std::wstring name, int Data) : PrimitiveReturnables(PRIMITIVE_INTEGER, name) {
    this->Data = Data;
}

PInteger::PInteger() : PrimitiveReturnables(PRIMITIVE_INTEGER, std::wstring(reinterpret_cast<const wchar_t *>("null"))) {

}
