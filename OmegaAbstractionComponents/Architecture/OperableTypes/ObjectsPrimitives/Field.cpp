//
// Created by Danil on 03.08.2023.
//

#include "Field.h"

#include <utility>

Field::Field(class Type * Data, std::wstring Name) {
    this->Type = Data;
    this->Name = std::move(Name);
}

CTSObject *Field::ReturnType() {
    return Type;
}
