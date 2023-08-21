//
// Created by Danil on 21.08.2023.
//

#include "GC.h"

void GC::FreeMemory(GCHandler Handler) {
    if (Stack.top().ReturnLinkCounter() == 0){
        delete Handler.ReturnValue();
    }
}

Type *GC::GetStackTop() {
    Type* CurrentType = nullptr;
    CurrentType = Stack.top().CopyValue(CurrentType);
    return CurrentType;
}

void GC::PopStack() {
    Stack.top().ReturnValue();
    FreeMemory(Stack.top());
    Stack.pop();
}

void GC::PushToStack(Type * Type) {
    Stack.emplace(Type);
}

Type *GC::GetTopAndPop() {
    Type* CurrentType = nullptr;
    CurrentType = GetStackTop();
    PopStack();
    return CurrentType;
}

Word GC::ReturnStackLength() {
    return this->Stack.size();
}

GC::GC() = default;
