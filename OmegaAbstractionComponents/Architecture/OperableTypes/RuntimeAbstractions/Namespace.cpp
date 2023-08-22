//
// Created by Danil on 03.08.2023.
//

#include "Namespace.h"

#include <utility>

int Namespace::ReturnMainClass() {
    for (int i = 0; i < (int)Objects.size(); ++i) {
        if (Objects[i].ReturnName() == L"Main"){
            return i;
        }
    }
    return 0;
}

std::wstring Namespace::ReturnName() {
    return this->Name;
}

Object Namespace::ReturnMainClassObject() {
    return Objects[this->ReturnMainClass()];
}

Namespace::Namespace(std::wstring Name) {
    this->Name = std::move(Name);
}

void Namespace::AppendObject(const Object& Object) {
    this->Objects.push_back(Object);
}

std::vector<Object> Namespace::ReturnObjects() {
    return Objects;
}
