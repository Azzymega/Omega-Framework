//
// Created by Danil on 03.08.2023.
//

#include "Method.h"

#include <utility>

void Method::AppendParameter(const Parameter& Field) {
    this->Parameters.push_back(Field);
}

void Method::AppendOperation(Command* Operation) {
    this->Operations.push_back(Operation);
}

Method::Method(const std::string& Name, std::string MethodParameterType) {
    this->Name = Name;
    this->ReturnType = std::move(MethodParameterType);
}

std::string Method::ReturnName() {
    return this->Name;
}

void Method::Execute() {
    for (Command* Command : Operations) {
        Command->PerformOperation();
    }
}

