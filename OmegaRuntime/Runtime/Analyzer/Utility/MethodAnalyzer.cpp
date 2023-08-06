//
// Created by Danil on 03.08.2023.
//

#include "MethodAnalyzer.h"

class Method MethodAnalyzer::AnalyzeMethod(Stack MethodMemoryMap,void* Runtime) {
    int Pointer = 0;
    MethodParametersType ReturnType =
            static_cast<MethodParametersType>(MethodMemoryMap.GetCell(Pointer).ReturnData());
    std::string MethodName;
    Pointer++;
    for (; MethodMemoryMap.GetCell(Pointer).ReturnData() != MethodNameEnds; ++Pointer) {
        MethodName+=MethodMemoryMap.GetCell(Pointer).ReturnData();
    } // Переписать метод.
}