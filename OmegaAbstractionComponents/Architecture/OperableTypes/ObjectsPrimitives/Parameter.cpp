//
// Created by Danil on 06.08.2023.
//

#include "Parameter.h"

#include <utility>

Parameter::Parameter(std::wstring TypeName, std::wstring Name, int Number) : Type(TypeT::OBJECT_WITH_FIELDS, std::move(TypeName)) {
    this->Number = Number;
    this->Name = std::move(Name);
}
