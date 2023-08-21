//
// Created by Danil on 21.08.2023.
//

#include "GCHandler.h"

GCHandler::GCHandler(class Type *CurrentType) : Type(*CurrentType) {
    this->LinkCounter = 1; // Базовое значение.
}

Word GCHandler::ReturnLinkCounter() const {
    return this->LinkCounter;
}

class Type *GCHandler::ReturnPointer() {
    LinkCounter++;
    return this;
}

class Type* GCHandler::ReturnValue() {
    LinkCounter--;
    return this;
}