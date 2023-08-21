//
// Created by Danil on 21.08.2023.
//

#include "GCHandler.h"

GCHandler::GCHandler(class Type * Type) {
    this->Type = Type;
    this->LinkCounter = 1; // Базовое значение.
}

Word GCHandler::ReturnLinkCounter() const {
    return this->LinkCounter;
}

class Type *GCHandler::ReturnValue() {
    this->LinkCounter--;
    return Type;
}

class Type* GCHandler::CopyValue(class Type* PointerType) {
    PointerType = this->Type;
    this->LinkCounter++;
    return PointerType;
}
