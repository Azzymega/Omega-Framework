//
// Created by Danil on 31.07.2023.
//

#include "Depository.h"

Word Depository::ReturnData() {
    return Data;
}

void Depository::GetData(Word Data) {
    this->Data = Data;
}

Depository::Depository(Word Data) {
    this->Data = Data;
}
