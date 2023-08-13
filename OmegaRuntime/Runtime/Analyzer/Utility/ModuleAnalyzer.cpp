//
// Created by Danil on 13.08.2023.
//

#include "ModuleAnalyzer.h"
#include "NamespaceAnalyzer.h"
#include "Range.h"

Module ModuleAnalyzer::AnalyzeModule(Stack ModuleMemoryPack, void * Runtime) {
    std::string Name;
    std::vector<Range> NamespaceRanges;
    std::vector<Stack> NamespaceStacks;
    std::vector<Namespace> Namespaces;
    for (int i = 0; i < ModuleMemoryPack.ReturnCellsSize(); ++i) {
        if (ModuleMemoryPack.GetCell(i).ReturnData() == TokenTypes::ModuleNameStarts){
            for (int j = i; j < ModuleMemoryPack.ReturnCellsSize(); ++j) {
                if (ModuleMemoryPack.GetCell(j).ReturnData() == TokenTypes::ModuleNameEnd){
                    break;
                }
                Name+=ModuleMemoryPack.GetCell(j).ReturnData();
            }
        }
    }
    for (int i = 0; i < ModuleMemoryPack.ReturnCellsSize(); ++i) {
        if(ModuleMemoryPack.GetCell(i).ReturnData() == NamespaceStarts){
            Range CurrentRange = Range();
            CurrentRange.Start = i++;
            for (int j = i; j < ModuleMemoryPack.ReturnCellsSize(); ++j) {
                if (ModuleMemoryPack.GetCell(j).ReturnData() == NamespaceEnds){
                    i = j+1;
                    CurrentRange.End = j;
                }
            }
            NamespaceRanges.push_back(CurrentRange);
        }
    }
    for ( Range CurrentRange : NamespaceRanges) {
        Stack Data = Stack();
        for (int i = CurrentRange.Start+1; i < CurrentRange.End; ++i) {
            Data.AppendCell(Cell(ModuleMemoryPack.GetCell(i).ReturnData()));
        }
        NamespaceStacks.push_back(Data);
    }
    Namespaces.reserve(NamespaceStacks.size());
    for ( const Stack& Data : NamespaceStacks) {
        Namespaces.push_back(NamespaceAnalyzer::AnalyzeNamespace(Data,Runtime));
    }
    return {Name,Namespaces};
}
