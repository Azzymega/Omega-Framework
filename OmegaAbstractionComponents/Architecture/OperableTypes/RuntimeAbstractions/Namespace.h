//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_NAMESPACE_H
#define LEGACYRUNTIME_NAMESPACE_H


#include <vector>
#include "Object.h"

class Namespace {
private:
    std::wstring Name;
    std::vector<Object> Objects;
public:
    Namespace(std::wstring);
    std::vector<Object> ReturnObjects();
    int ReturnMainClass();
    void AppendObject(const Object&);
    Object ReturnMainClassObject();
    std::wstring ReturnName();
};


#endif //LEGACYRUNTIME_NAMESPACE_H
