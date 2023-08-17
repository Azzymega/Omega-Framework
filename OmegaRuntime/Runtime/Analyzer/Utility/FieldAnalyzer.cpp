//
// Created by Danil on 09.08.2023.
//

#include "FieldAnalyzer.h"
#include "../../../../OmegaCTS/BTS/SystemString.h"
#include "../../../../OmegaCTS/BTS/SystemInteger.h"

Field *FieldAnalyzer::AnalyzeField(Stack FieldMemory, void * Runtime) {
    /*
    MethodParametersType Type;
    std::string FieldName;
    Type = static_cast<MethodParametersType>(FieldMemory.GetCell(1).ReturnData());
    for (int i = 0; i < FieldMemory.ReturnCellsSize(); ++i) {
        if (FieldMemory.GetCell(i).ReturnData() == TokenTypes::FieldNameStart){
            for (int j = i; j < FieldMemory.ReturnCellsSize(); ++j) {
                if (FieldMemory.GetCell(j).ReturnData() == TokenTypes::FieldNameEnds){
                    break;
                }
                FieldName+=FieldMemory.GetCell(j).ReturnData();
            }
            break;
        }
    }
    switch (Type) {
        case MethodParametersType::TString : {
            return new Field(new SystemString(std::vector<char>()),FieldName);
        }
        default:{}
            return new Field(new SystemInteger(FieldName,PInteger()),FieldName);
    }
     */
}
