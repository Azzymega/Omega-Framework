//
// Created by Danil on 06.08.2023.
//

#include "CommandAnalyzer.h"
#include "Range.h"
#include "ParameterAnalyzer.h"
#include "../../../Architecture/PrimitiveOperations/Add.h"
#include "../../../Architecture/PrimitiveOperations/Pop.h"
#include "../../../Architecture/PrimitiveOperations/ISLoad.h"
#include "../../../Architecture/PrimitiveOperations/SILoad.h"
#include "../../../Architecture/PrimitiveOperations/Sload.h"

Command *CommandAnalyzer::AnalyzeCommand(Stack Data, void* Runtime) {
    int InstructionType = Data.GetCell(0).ReturnData();
    std::vector<Parameter*> Parameters = std::vector<Parameter*>();
    std::vector<Range> ParametersRanges = std::vector<Range>();
    std::vector<Stack> Stacks = std::vector<Stack>();
    for (int i = 0; i < Data.ReturnCellsSize(); ++i) {
        if(Data.GetCell(i).ReturnData() == InstructionParameterTypeStart){
            Range CurrentRange = Range();
            CurrentRange.Start = i++;
            for (int j = i; j < Data.ReturnCellsSize(); ++j) {
                if (Data.GetCell(j).ReturnData() == InstructionParameterTypeEnds){
                    i = j+1;
                    CurrentRange.End = j;
                }
            }
            ParametersRanges.push_back(CurrentRange);
        }
    }
    for ( Range CurrentRange : ParametersRanges) {
        Stack CurrentStack = Stack();
        for (int i = CurrentRange.Start; i < CurrentRange.End; ++i) {
            CurrentStack.AppendCell(Data.GetCell(i));
        }
        Stacks.push_back(CurrentStack);
    }
    for (const Stack& CurrentStack : Stacks) {
        Parameters.push_back(ParameterAnalyzer::AnalyzeParameter(CurrentStack,Runtime));
    }
    switch (InstructionType) {
        case OP_ADD: {
            return new Add(std::vector<Parameter *>(), Runtime);
        }
        case OP_POP: {
            return new Pop(std::vector<Parameter *>(), Runtime);
        }
        case OP_ISLOAD: {
            return new ISLoad(std::vector<Parameter *>(), Runtime);
        }
        case OP_SILOAD: {
            return new SILoad(std::vector<Parameter *>(), Runtime);
        }
        case OP_SLOAD: {
            return new Sload(std::vector<Parameter *>(), Runtime);
        }
        default:{
            return nullptr;
        }
    }
}
