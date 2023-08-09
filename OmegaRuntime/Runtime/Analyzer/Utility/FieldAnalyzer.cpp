//
// Created by Danil on 09.08.2023.
//

#include "FieldAnalyzer.h"
#include "../../../Architecture/CTS/String.h"
#include "../../../Architecture/CTS/Integer.h"

Field *FieldAnalyzer::AnalyzeField(Stack FieldMemory, void *) {
    MethodParametersType Type;
    std::string FieldName;
    Type = static_cast<MethodParametersType>(FieldMemory.GetCell(1).ReturnData());
    for (int i = 0; i < FieldMemory.ReturnCellsSize(); ++i) {
        if (i == TokenTypes::FieldNameStart){}
        for (int j = i; j < FieldMemory.ReturnCellsSize(); ++j) {
            if (j == TokenTypes::FieldNameEnds){
                break;
            }
            FieldName+=FieldMemory.GetCell(j).ReturnData();
        }
        break;
    }
    switch (Type) {
        case MethodParametersType::TString : {
            return new Field(new String(std::vector<char>()),FieldName);
        }
        default:{}
            return new Field(new Integer(0),FieldName);
    }
}