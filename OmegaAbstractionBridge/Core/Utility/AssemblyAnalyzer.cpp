//
// Created by Danil on 13.08.2023.
//

#include "AssemblyAnalyzer.h"
#include "Range.h"
#include "ModuleAnalyzer.h"

Assembly AssemblyAnalyzer::AnalyzeAssembly(Stack AssemblyMemoryPack, void * Runtime) {
    std::wstring Name;
    std::vector<Range> ModuleRanges;
    std::vector<Stack> ModuleStacks;
    std::vector<Module> Modules;
    for (int i = 0; i < AssemblyMemoryPack.ReturnCellsSize(); ++i) {
        if (AssemblyMemoryPack.GetCell(i).ReturnData() == TokenTypes::AssemblyNameStarts){
            for (int j = i; j < AssemblyMemoryPack.ReturnCellsSize(); ++j) {
                if (AssemblyMemoryPack.GetCell(j).ReturnData() == TokenTypes::AssemblyNameEnds){
                    break;
                }
                Name+=(wchar_t)AssemblyMemoryPack.GetCell(j).ReturnData();
            }
        }
    }
    for (int i = 0; i < AssemblyMemoryPack.ReturnCellsSize(); ++i) {
        if(AssemblyMemoryPack.GetCell(i).ReturnData() == ModuleStarts){
            Range CurrentRange = Range();
            CurrentRange.Start = i++;
            for (int j = i; j < AssemblyMemoryPack.ReturnCellsSize(); ++j) {
                if (AssemblyMemoryPack.GetCell(j).ReturnData() == ModuleEnds){
                    i = j+1;
                    CurrentRange.End = j;
                }
            }
            ModuleRanges.push_back(CurrentRange);
        }
    }
    for ( Range CurrentRange : ModuleRanges) {
        Stack Data = Stack();
        for (int i = CurrentRange.Start+1; i < CurrentRange.End; ++i) {
            Data.AppendCell(Cell(AssemblyMemoryPack.GetCell(i).ReturnData()));
        }
        ModuleStacks.push_back(Data);
    }
    Modules.reserve(ModuleStacks.size());
    for ( const Stack& Data : ModuleStacks) {
        Modules.push_back(ModuleAnalyzer::AnalyzeModule(Data,Runtime));
    }
    return {Name,&Modules[0]};
}
