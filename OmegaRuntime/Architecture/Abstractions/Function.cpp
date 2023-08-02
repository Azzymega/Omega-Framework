//
// Created by Danil on 01.08.2023.
//

#include "Function.h"

#include <utility>

void Function::AppendOperation(Operation* Operation) {
    this->Operations.push(Operation);
}

Function::Function(std::string unnamed) : Object(unnamed) {

}

Operation *Function::ReturnOperation() {
    Operation* Operation = this->Operations.front();
    this->Operations.pop();
    return Operation;
}

Word Function::ReturnOperationCount() {
    return Operations.size();
}


