//
// Created by Danil on 06.08.2023.
//

#include "ParameterAnalyzer.h"
Parameter ParameterAnalyzer::AnalyzeParameter(const Stack& Data, void * Runtime) {
    /*
    int Number = Data.GetCell(0).ReturnData();
    switch (Data.GetCell(1).ReturnData()) {
        case TString:{
            std::vector<char> Characters = std::vector<char>();
            for (int i = 2; i < Data.ReturnCellsSize(); ++i) {
                Characters.push_back(Data.GetCell(i).ReturnData());
            }
            return new StringParameters(String(Characters),Number);
        }
        case TInteger:{
            std::string Digits;
            for (int i = 2; i < Data.ReturnCellsSize(); ++i) {
                Digits.push_back(Data.GetCell(i).ReturnData());
            }
            return new IntegerParameter(Integer(stoi(Digits)),Number);
        }
        default:{
        */
            return Parameter(TypeT::OBJECT_WITH_FIELDS,L"NULL",0);
        }/*
    }
}
*/