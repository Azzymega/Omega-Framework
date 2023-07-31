//
// Created by Danil on 31.07.2023.
//

#include "ROMAnalyzer.h"
#include "../../DataTypes/ROM.h"

void ROMAnalyzer::Analyze(Stack * Data, Runtime CurrentRuntime) {
    ROM* Firmware = static_cast<ROM *>(Data);
    for (int i = 0; i < Firmware->ReturnCellsSize(); ++i) {
        switch (Firmware->GetCell(i).ReturnData()) {
            case Microcode:: // Доделать!!! Написать анализатор и после этого уже добавить недостающие коды операций!!!
        }
    }
}
