//
// Created by Danil on 03.08.2023.
//

#include "CommandAnalyzer.h"
#include "MethodAnalyzer.h"
#include "Range.h"
#include "../../../Architecture/CTS/String.h"
#include "../../../Architecture/CTS/Integer.h"

class Method MethodAnalyzer::AnalyzeMethod(Stack MethodMemoryMap,void* Runtime) {
    std::vector<Command*> Operations;
    std::vector<Stack> InstructionsStack;
    std::vector<Range> ParametersRanges;
    std::vector<Range> InstructionRanges;
    std::vector<Parameter*> Params;
    std::vector<MethodParametersType> ParametersTypes;
    int Pointer = 0;
    MethodParametersType ReturnType =
            static_cast<MethodParametersType>(MethodMemoryMap.GetCell(Pointer).ReturnData());
    std::string MethodName;
    Pointer+=2;
    for (; MethodMemoryMap.GetCell(Pointer).ReturnData() != MethodNameEnds; ++Pointer) {
        MethodName+=MethodMemoryMap.GetCell(Pointer).ReturnData();
    }
    Method CurrentMethod = Method(MethodName,ReturnType);
    Pointer+=2;
    for (int i = 0; i < MethodMemoryMap.ReturnCellsSize(); ++i) {
        if(MethodMemoryMap.GetCell(i).ReturnData() == MethodParameterStart){
            Range CurrentRange = Range();
            CurrentRange.Start = i++;
            for (int j = i; j < MethodMemoryMap.ReturnCellsSize(); ++j) {
                if (MethodMemoryMap.GetCell(j).ReturnData() == MethodParameterEnd){
                    i = j+1;
                    CurrentRange.End = j;
                }
            }
            ParametersRanges.push_back(CurrentRange);
        }
    }
    for (int i = 0; i < MethodMemoryMap.ReturnCellsSize(); ++i) {
        if(MethodMemoryMap.GetCell(i).ReturnData() == InstructionStarts){
            Range CurrentRange = Range();
            CurrentRange.Start = i++;
            for (int j = i; j < MethodMemoryMap.ReturnCellsSize(); ++j) {
                if (MethodMemoryMap.GetCell(j).ReturnData() == InstructionEnds){
                    i = j+1;
                    CurrentRange.End = j;
                }
            }
            InstructionRanges.push_back(CurrentRange);
        }
    }
    for ( Range CurrentRange : ParametersRanges) {
        switch (MethodMemoryMap.GetCell(CurrentRange.Start).ReturnData()) {
            case TString:{
                std::vector<char> Data;
                for (int i = CurrentRange.Start+1; i < CurrentRange.End; ++i) {
                    Data.push_back(MethodMemoryMap.GetCell(i).ReturnData());
                }
                Params.push_back(reinterpret_cast<Parameter *>(new String(Data)));
                ParametersTypes.push_back(TString);
                break;
            }
            case TInteger:{
                Params.push_back(reinterpret_cast<Parameter *>(new Integer(
                        MethodMemoryMap.GetCell(CurrentRange.Start + 1).ReturnData())));
                ParametersTypes.push_back(TInteger);
            }
        }
    }
    for ( Range CurrentRange : InstructionRanges) {
        Stack Data = Stack();
        for (int i = CurrentRange.Start+1; i < CurrentRange.End; ++i) {
            Data.AppendCell(Cell(MethodMemoryMap.GetCell(i).ReturnData()));
        }
        InstructionsStack.push_back(Data);
    }
    for ( Stack Data : InstructionsStack) {
        Operations.push_back(CommandAnalyzer::AnalyzeCommand(Data,Runtime));
    }
    for ( Parameter* Param : Params) {
        CurrentMethod.AppendParameter(Param);
    }
    for (Command* Comm : Operations){
        CurrentMethod.AppendOperation(Comm);
    }
    for (MethodParametersType Type : ParametersTypes){
        CurrentMethod.AppendParameterType(Type);
    }
    return CurrentMethod;
}