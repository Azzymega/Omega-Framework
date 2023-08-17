//
// Created by Danil on 12.08.2023.
//

#include "NamespaceAnalyzer.h"
#include "Range.h"

Namespace NamespaceAnalyzer::AnalyzeNamespace(Stack NamespaceMemoryPack, void * Runtime) {
    std::wstring Name;
    std::vector<Object> Objects;
    std::vector<Range> ObjectsRanges;
    std::vector<Stack> ObjectsStacks;
    for (int i = 0; i < NamespaceMemoryPack.ReturnCellsSize(); ++i) {
        if (NamespaceMemoryPack.GetCell(i).ReturnData() == TokenTypes::NamespaceNameStarts){
            for (int j = i; j < NamespaceMemoryPack.ReturnCellsSize(); ++j) {
                if (NamespaceMemoryPack.GetCell(j).ReturnData() == TokenTypes::NamespaceNameEnd){
                    break;
                }
                Name+=(wchar_t)NamespaceMemoryPack.GetCell(j).ReturnData();
            }
        }
    }
    auto CurrentNamespace = Namespace(Name);
    for (int i = 0; i < NamespaceMemoryPack.ReturnCellsSize(); ++i) {
        if(NamespaceMemoryPack.GetCell(i).ReturnData() == ObjectStarts){
            Range CurrentRange = Range();
            CurrentRange.Start = i++;
            for (int j = i; j < NamespaceMemoryPack.ReturnCellsSize(); ++j) {
                if (NamespaceMemoryPack.GetCell(j).ReturnData() == ObjectEnds){
                    i = j+1;
                    CurrentRange.End = j;
                }
            }
            ObjectsRanges.push_back(CurrentRange);
        }
    }
    for ( Range CurrentRange : ObjectsRanges) {
        Stack Data = Stack();
        for (int i = CurrentRange.Start+1; i < CurrentRange.End; ++i) {
            Data.AppendCell(Cell(NamespaceMemoryPack.GetCell(i).ReturnData()));
        }
        ObjectsStacks.push_back(Data);
    }
    Objects.reserve(ObjectsStacks.size());
    for ( const Stack& Data : ObjectsStacks) {
        Objects.push_back(ObjectAnalyzer::AnalyzeObject(Data, Runtime));
    }
    for ( const Object& Object : Objects) {
        CurrentNamespace.AppendObject(Object);
    }
    return CurrentNamespace;
}
