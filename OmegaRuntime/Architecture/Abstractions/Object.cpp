//
// Created by Danil on 02.08.2023.
//

#include "Object.h"

#include <utility>

Object::Object(std::string Name) {
    this->ObjectName = std::move(Name);
}

void Object::SetName(std::string Name) {
    this->ObjectName = Name;
}