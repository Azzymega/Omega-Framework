//
// Created by Danil on 01.08.2023.
//

#include "MetadataAnalyzer.h"
#include "ROMAnalyzer.h"

void MetadataAnalyzer::Analyze(Stack * Data, Runtime * CurrentRuntime) {
    ROM* Firmware = static_cast<ROM *>(Data);
    std::vector<Object> Objects;
    for (int i = 0; i < Firmware->ReturnCellsSize(); ++i) {
        switch (Firmware->GetCell(i).ReturnData()) {
            case MetadataTypes::MT_START :
                switch (Firmware->GetCell(i+1).ReturnData()) {
                    case MetadataObjectsType::MT_METHOD : {
                        std::string FunctionName;
                        ROM FunctionData;
                        int DataStarts;
                        for (int j = i; j < Firmware->ReturnCellsSize(); ++j) {
                            if (Firmware->GetCell(j).ReturnData() != MetadataTypes::MT_END){
                                break;
                            }
                            else{
                                FunctionName+=std::to_string(Firmware->GetCell(j).ReturnData());
                                DataStarts = j+2;
                            }
                        }
                        for (int j = DataStarts; j < Firmware->ReturnCellsSize(); ++j) {
                            if (Firmware->GetCell(j).ReturnData() != MetadataTypes::OBJ_DATA_END){
                                FunctionData.AppendCell(Cell(Firmware->GetCell(j).ReturnData()));
                            }
                            else{
                                i+=j+1;
                            }
                        }
                        Objects.push_back(Function(FunctionName));
                        ROMAnalyzer Analyzer;
                        Analyzer.Analyze(&FunctionData, CurrentRuntime,
                                         static_cast<Function *>(&(Objects[Objects.size() - 1])));

                    }
                }
        }
    }
    for ( Object Object : Objects) {
        CurrentRuntime->AddFunction(static_cast<Function *>(&Object));
    }
    // Переделать анализатор памяти в анализатор наполнения методов и сменить в рантайме
    // операции на методы, чтобы он управлял уже абстракциями более выского уровня!!!
}
