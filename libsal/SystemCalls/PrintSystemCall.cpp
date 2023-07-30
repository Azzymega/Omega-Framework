//
// Created by Danil on 30.07.2023.
//

#include <iostream>
#include "PrintSystemCall.h"

char PrintSystemCall::ReturnPrintableData() const {
    return PrintableData;
}

PrintSystemCall::PrintSystemCall(char PrintableData) : SystemCall(SoftwareAbstractions::Print){
    this->PrintableData = PrintableData;
}

void PrintSystemCall::Execute() {
    std::cout << PrintableData << std::endl;
}

void* PrintSystemCall::ReturnRequest() {
    return &PrintableData;
}
