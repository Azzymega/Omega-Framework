//
// Created by Danil on 21.08.2023.
//

#ifndef LEGACYRUNTIME_GC_H
#define LEGACYRUNTIME_GC_H


#include <stack>
#include "OverAbstractions/GCHandler.h"

class GC {
private:
    std::stack<GCHandler> Stack;
public:
    GC();
    void FreeMemory(GCHandler);
    Type* GetStackTop();
    void PushToStack(Type*);
    void PopStack();
    Type* GetTopAndPop();
    Word ReturnStackLength();
};


#endif //LEGACYRUNTIME_GC_H
