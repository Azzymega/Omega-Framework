//
// Created by Danil on 03.08.2023.
//

#include "Field.h"

Field::Field(struct Type * Data, std::string Name) {
    this->Type = reinterpret_cast<CTSObject *>(Data);
    this->Name = Name;
}
