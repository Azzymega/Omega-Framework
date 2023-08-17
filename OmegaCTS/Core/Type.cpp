//
// Created by Danil on 17.08.2023.
//

#include "Type.h"

void Type::AppendInternals(CTSObject *Object) {
    this->Internals.push_back(Object);
}

Type::Type(TypeT currentType, std::wstring name) : CTSObject(currentType, name) {

}

CTSObject *Type::ReturnParameterByName(std::wstring ParameterName) {
    for (CTSObject* Obj : Internals) {
        if (Obj->ReturnName() == ParameterName){
            return Obj;
        }
    }
}

CTSObject *Type::ReturnParameterByIndex(int ParameterIndex) {
    return Internals[ParameterIndex];
}
