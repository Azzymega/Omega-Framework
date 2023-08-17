//
// Created by Danil on 06.08.2023.
//

#include "Parameter.h"

Parameter::Parameter(TypeT currentType, std::wstring name, int Number) : Type(currentType, name) {
    this->Number = Number;
}
