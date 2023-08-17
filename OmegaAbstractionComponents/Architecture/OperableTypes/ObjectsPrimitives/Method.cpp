//
// Created by Danil on 03.08.2023.
//

#include "Method.h"

void Method::AppendParameter(Parameter* Field) {
    this->Parameters.push_back(Field);
}

void Method::AppendOperation(Command* Operation) {
    this->Operations.push_back(Operation);
}

Method::Method(std::string, std::string MethodParameterType) {
    this->Name = Name;
    this->ReturnType = MethodParameterType;
}

std::string Method::ReturnName() {
    return this->Name;
}

void Method::Execute() {
    for (Command* Command : Operations) {
        Command->PerformOperation();
    }
}

