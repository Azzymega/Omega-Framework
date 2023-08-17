//
// Created by Danil on 03.08.2023.
//

#include "CommandAnalyzer.h"
#include "MethodAnalyzer.h"
#include "Range.h"

class Method MethodAnalyzer::AnalyzeMethod(Stack MethodMemoryMap,void* Runtime) {
    std::vector<Command*> Operations;
    std::vector<Stack> InstructionsStack;
    std::vector<Stack> ParameterStacks;
    std::vector<Range> ParametersRanges;
    std::vector<Range> InstructionRanges;
    std::string ReturnType;
    std::vector<Parameter> Params;
    std::vector<MethodParametersType> ParametersTypes;
    for (int i = 0; i < MethodMemoryMap.ReturnCellsSize(); ++i) {
        if(MethodMemoryMap.GetCell(i).ReturnData() == MethodReturnTypeStarts){
            for (int j = i; j < MethodMemoryMap.ReturnCellsSize(); ++j) {
                ReturnType+=MethodMemoryMap.GetCell(j).ReturnData();
                if (MethodMemoryMap.GetCell(j).ReturnData() == MethodReturnTypeEnds){
                    break;
                }
                break;
            }
            break;
        }
    }
    std::string MethodName;
    for (int i = 0; i < MethodMemoryMap.ReturnCellsSize(); ++i) {
        if(MethodMemoryMap.GetCell(i).ReturnData() == MethodNameStarts){
            for (int j = i; j < MethodMemoryMap.ReturnCellsSize(); ++j) {
                MethodName+=MethodMemoryMap.GetCell(j).ReturnData();
                if (MethodMemoryMap.GetCell(j).ReturnData() == MethodNameEnds){
                    break;
                }
                break;
            }
            break;
        }
    }
    Method CurrentMethod = Method(MethodName,ReturnType);
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
        Stack Data = Stack();
        for (int i = CurrentRange.Start+1; i < CurrentRange.End; ++i) {
            Data.AppendCell(Cell(MethodMemoryMap.GetCell(i).ReturnData()));
        }
        ParameterStacks.push_back(Data);
    }
    for ( Range CurrentRange : InstructionRanges) {
        Stack Data = Stack();
        for (int i = CurrentRange.Start+1; i < CurrentRange.End; ++i) {
            Data.AppendCell(Cell(MethodMemoryMap.GetCell(i).ReturnData()));
        }
        InstructionsStack.push_back(Data);
    }
    for ( const Stack& Data : InstructionsStack) {
        Operations.push_back(CommandAnalyzer::AnalyzeCommand(Data,Runtime));
    }
    for ( const Stack& Data : ParameterStacks) {
        Params.push_back(ParameterAnalyzer::AnalyzeParameter(Data,Runtime));
    }
    for (Parameter Param : Params) {
        CurrentMethod.AppendParameter(Param);
    }
    for (Command* Comm : Operations){
        CurrentMethod.AppendOperation(Comm);
    }
    return CurrentMethod;
}