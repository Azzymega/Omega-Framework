//
// Created by Danil on 21.08.2023.
//

#ifndef LEGACYRUNTIME_GC_H
#define LEGACYRUNTIME_GC_H


#include <stack>
#include "OverAbstractions/GCHandler.h"

class GC {
private:
    std::vector<GCHandler> AllocatedChunks;
    std::stack<GCHandler*> Stack;
public:
    GC();
    void FreeMemory();
    void PushToStack(Type*);
    Type* GetTop();
    void PopStack();
    void Duplicate();
    Word ReturnStackLength();
};


#endif //LEGACYRUNTIME_GC_H
