//
// Created by Danil on 17.08.2023.
//

#include "CTS.h"
#include "../BTS/SystemInteger.h"
#include "../BTS/SystemString.h"

CTS::CTS() {
    auto* Integer = new SystemInteger();
    auto* String = new SystemString();
    this->TypeList[Integer->ReturnName()] = Integer;
    this->TypeList[String->ReturnName()] = String;
}

void CTS::AppendType(Object CurrentObject) {
    Type* CurrentType = ConstructType(std::move(CurrentObject));
    this->TypeList[CurrentType->ReturnName()] = CurrentType;
}

Type *CTS::ConstructType(Object CurrentObject) {
    Type* CurrentType = new Type(OBJECT_WITH_FIELDS,CurrentObject.ReturnName());
    for ( Field CurrentField : CurrentObject.ReturnFields()) {
        CurrentType->AppendInternals(CurrentField.ReturnType());
    }
    CurrentObject.SetTypeRepresentation(CurrentType);
    return CurrentType;
}

Type* CTS::ReturnAllocatedType(const std::wstring& TypeName) {
    return new Type(*TypeList[TypeName]);
}

void CTS::InitializeAssemblyTypeSystem(Assembly CurrentAssembly) {
    std::vector<Object> FullMetadata = CurrentAssembly.ReturnAllAssemblyMetadata();
    for (const Object& CurrentObject : FullMetadata) {
        AppendType(CurrentObject);
    }
}
