//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_OBJECT_H
#define LEGACYRUNTIME_OBJECT_H


#include <string>
#include <vector>
#include "../ObjectsPrimitives/Field.h"
#include "../ObjectsPrimitives/Method.h"

class Object {
protected:
    Type* TypeRepresentation;
    std::wstring Name;
    std::vector<Field> Fields;
    std::vector<Method> Methods;
public:
    Object(std::wstring, std::vector<Field>, std::vector<Method>);
    int ReturnMainIndex();
    std::vector<Field> ReturnFields();
    Method* ReturnMain();
    void SetTypeRepresentation(Type* Type);
    std::wstring ReturnName();
};


#endif //LEGACYRUNTIME_OBJECT_H
