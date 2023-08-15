//
// Created by Danil on 06.08.2023.
//

#include "IntegerParameter.h"

IntegerParameter::IntegerParameter(Integer Data, int Number) : Data(Data){
    this->Number = Number;
}

Type *IntegerParameter::ReturnParameter() {
    return nullptr;
}
