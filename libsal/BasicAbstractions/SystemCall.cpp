//
// Created by Danil on 30.07.2023.
//

#include "SystemCall.h"

SystemCall::SystemCall(char ID) {
    this->SystemCallID = static_cast<SoftwareAbstractions>(ID);
}

void SystemCall::Execute() {

}

void *SystemCall::ReturnRequest() {
    return nullptr;
}
