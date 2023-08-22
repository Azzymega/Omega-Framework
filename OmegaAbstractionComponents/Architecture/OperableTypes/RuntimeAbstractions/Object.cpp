//
// Created by Danil on 03.08.2023.
//

#include "Object.h"

#include <utility>

std::wstring Object::ReturnName() {
    return this->Name;
}

int Object::ReturnMainIndex() {
    for (int i = 0; i < (int)Methods.size(); ++i) {
        if (Methods[i].ReturnName() == "Main"){
            return i;
        }
    }
    return 0;
}

Method *Object::ReturnMain() {
    return &this->Methods[this->ReturnMainIndex()];
}

Object::Object(std::wstring Name, std::vector<Field> Fields, std::vector<Method> Methods) {
    this->Name = std::move(Name);
    this->Methods = std::move(Methods);
    this->Fields = std::move(Fields);
}

std::vector<Field> Object::ReturnFields() {
    return Fields;
}

void Object::SetTypeRepresentation(Type *Type) {
    this->TypeRepresentation = Type;
}
