//
// Created by Danil on 30.07.2023.
//

#include <iostream>
#include "GetSystemCall.h"

std::string GetSystemCall::ReturnInputtedData() {
    return InputtedData;
}

GetSystemCall::GetSystemCall() : SystemCall(SoftwareAbstractions::Get) {

}

void GetSystemCall::Execute() {
    std::cin >> InputtedData;
}

void* GetSystemCall::ReturnRequest() {
    return &InputtedData;
}
