//
// Created by Danil on 06.08.2023.
//

#include "ParameterAnalyzer.h"
#include "../../../Architecture/CTS/String.h"
#include "../../../Architecture/OperableTypes/CTSParameters/StringParameters.h"
#include "../../../Architecture/OperableTypes/CTSParameters/IntegerParameter.h"

Parameter *ParameterAnalyzer::AnalyzeParameter(Stack Data, void * Runtime) {
    int Number = Data.GetCell(0).ReturnData();
    switch (Data.GetCell(1).ReturnData()) {
        case TString:{
            std::vector<char> Characters = std::vector<char>();
            for (int i = 1; i < Data.ReturnCellsSize(); ++i) {
                Characters.push_back(Data.GetCell(i).ReturnData());
            }
            return new StringParameters(String(Characters),Number);
        }
        case TInteger:{
            return new IntegerParameter(Integer(Data.GetCell(2).ReturnData()),Number);
        }
        default:{
            return nullptr;
        }
    }
}
