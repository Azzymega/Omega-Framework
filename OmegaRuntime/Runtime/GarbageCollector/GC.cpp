//
// Created by Danil on 21.08.2023.
//

#include <algorithm>
#include "GC.h"


void GC::PopStack() {
    Stack.top()->ReturnPointer();
    Stack.pop();
}

void GC::PushToStack(Type * Type) {
    GCHandler Handler = GCHandler(Type);
    AllocatedChunks.emplace_back(Handler);
    Stack.emplace(&AllocatedChunks.back());
}

Word GC::ReturnStackLength() {
    return this->Stack.size();
}

void GC::FreeMemory() {
    for (int i = 0; i < AllocatedChunks.size(); ++i) {
        if (AllocatedChunks[i].ReturnLinkCounter() == 0){
            AllocatedChunks.erase(AllocatedChunks.begin()+i);
        }
    }
}

Type *GC::GetTop() {
    return this->Stack.top();
}

void GC::Duplicate() {
    Stack.emplace((GCHandler*)Stack.top()->ReturnPointer());
}

GC::GC() = default;
