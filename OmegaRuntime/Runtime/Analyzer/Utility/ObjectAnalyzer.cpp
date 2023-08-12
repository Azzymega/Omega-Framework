//
// Created by Danil on 09.08.2023.
//

#include "ObjectAnalyzer.h"
#include "FieldAnalyzer.h"
#include "Range.h"
#include "MethodAnalyzer.h"
#include "../../../Architecture/OperableTypes/LanguageStructures/Structure.h"

Object *ObjectAnalyzer::AnalyzeObject(Stack ObjectMemory, void * CurrentNamespace, void* Runtime) {
    std::vector<Field> Fields;
    std::vector<Method> Methods;
    std::vector<Range> FieldsRanges;
    std::vector<Range> MethodsRanges;
    std::vector<Stack> FieldsStacks;
    std::vector<Stack> MethodsStacks;
    std::string Name;
    for (int i = 0; i < ObjectMemory.ReturnCellsSize(); ++i) {
        if (ObjectMemory.GetCell(i).ReturnData() == TokenTypes::ObjectNameStarts){
            for (int j = i; j < ObjectMemory.ReturnCellsSize(); ++j) {
                if (ObjectMemory.GetCell(j).ReturnData() == TokenTypes::ObjectNameEnds){
                    break;
                }
                Name+=ObjectMemory.GetCell(j).ReturnData();
            }
            break;
        }
    }
    for (int i = 0; i < ObjectMemory.ReturnCellsSize(); ++i) {
        if(ObjectMemory.GetCell(i).ReturnData() == FieldStarts){
            Range CurrentRange = Range();
            CurrentRange.Start = i++;
            for (int j = i; j < ObjectMemory.ReturnCellsSize(); ++j) {
                if (ObjectMemory.GetCell(j).ReturnData() == FieldEnds){
                    i = j+1;
                    CurrentRange.End = j;
                }
            }
            FieldsRanges.push_back(CurrentRange);
        }
    }
    for (int i = 0; i < ObjectMemory.ReturnCellsSize(); ++i) {
        if(ObjectMemory.GetCell(i).ReturnData() == MethodStarts){
            Range CurrentRange = Range();
            CurrentRange.Start = i++;
            for (int j = i; j < ObjectMemory.ReturnCellsSize(); ++j) {
                if (ObjectMemory.GetCell(j).ReturnData() == MethodEnds){
                    i = j+1;
                    CurrentRange.End = j;
                }
            }
            MethodsRanges.push_back(CurrentRange);
        }
    }
    for ( Range CurrentRange : FieldsRanges) {
        Stack Data = Stack();
        for (int i = CurrentRange.Start+1; i < CurrentRange.End; ++i) {
            Data.AppendCell(Cell(ObjectMemory.GetCell(i).ReturnData()));
        }
        FieldsStacks.push_back(Data);
    }
    for ( Range CurrentRange : MethodsRanges) {
        Stack Data = Stack();
        for (int i = CurrentRange.Start+1; i < CurrentRange.End; ++i) {
            Data.AppendCell(Cell(ObjectMemory.GetCell(i).ReturnData()));
        }
        MethodsStacks.push_back(Data);
    }
    Fields.reserve(FieldsStacks.size());
    for ( const Stack& Data : FieldsStacks) {
        Fields.push_back(*FieldAnalyzer::AnalyzeField(Data,Runtime));
    }
    Methods.reserve(MethodsStacks.size());
    for ( const Stack& Data : MethodsStacks) {
        Methods.push_back(MethodAnalyzer::AnalyzeMethod(Data,Runtime));
    }
    for (int i = 0; i < ObjectMemory.ReturnCellsSize(); ++i) {
        if (ObjectMemory.GetCell(i).ReturnData() == TokenTypes::ObjectType){
            switch (ObjectMemory.GetCell(i+1).ReturnData()) {
                case STRUCT:{
                    return new Structure(Name,CurrentNamespace,Fields,Methods);
                }
                default:{
                    return new Class(Name,CurrentNamespace,Fields,Methods);
                }
            }
        }
    }
    return nullptr;
}
