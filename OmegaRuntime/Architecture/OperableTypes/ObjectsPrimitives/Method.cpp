//
// Created by Danil on 03.08.2023.
//

#include "Method.h"

void Method::AppendParameter(Field Field) {
    this->Parameters.push_back(Field);
}

void Method::AppendOperation(Operation* Operation) {
    this->Operations.push_back(Operation);
}

void Method::AppendParameterType(MethodParametersType Type) {
    this->ParametersTypes.push_back(Type);
}

Method::Method(std::string, MethodParametersType MethodParameterType) {
    this->Name = Name;
    this->ReturnType = MethodParameterType;
}
