//
// Created by Danil on 06.08.2023.
//

#include "ParameterAnalyzer.h"
Parameter ParameterAnalyzer::AnalyzeParameter(Stack Data, void * Runtime) {
    std::wstring TypeName;
    std::wstring Name;
    int Index = 0;
    for (int i = 0; i < Data.ReturnCellsSize(); ++i) {
        if(Data.GetCell(i).ReturnData() == ParameterTypeNameStart){
            for (i++; i < Data.ReturnCellsSize(); ++i) {
                if (Data.GetCell(i).ReturnData() == ParameterTypeNameEnds){
                    break;
                }
                TypeName+=(wchar_t)Data.GetCell(i).ReturnData();
            }
            break;
        }
    }
    for (int i = 0; i < Data.ReturnCellsSize(); ++i) {
        if(Data.GetCell(i).ReturnData() == ParameterNameStart){
            for (i++; i < Data.ReturnCellsSize(); ++i) {
                if (Data.GetCell(i).ReturnData() == ParameterNameEnds){
                    break;
                }
                Name+=(wchar_t)Data.GetCell(i).ReturnData();
            }
            break;
        }
    }
    for (int i = 0; i < Data.ReturnCellsSize(); ++i) {
        if(Data.GetCell(i).ReturnData() == ParameterIndexStart){
            for (i++; i < Data.ReturnCellsSize(); ++i) {
                if (Data.GetCell(i).ReturnData() == ParameterIndexEnds){
                    break;
                }
                Index+=Data.GetCell(i).ReturnData();
            }
            break;
        }
    }
    return {TypeName,Name,Index};
}
