//
// Created by Danil on 31.07.2023.
//

#include "ROMAnalyzer.h"
#include "../../../Architecture/PrimitiveOperations/ADD.h"
#include "../../../Architecture/PrimitiveOperations/MOV.h"
#include "../../../Architecture/PrimitiveOperations/CMV.h"
#include "../../../Architecture/PrimitiveOperations/SCL.h"
#include "../../../Architecture/PrimitiveOperations/PSH.h"
#include "../../../Architecture/PrimitiveOperations/POP.h"

void ROMAnalyzer::Analyze(Stack * Data, Runtime* CurrentRuntime) {
    ROM* Firmware = static_cast<ROM *>(Data);
    for (int i = 0; i < Firmware->ReturnCellsSize(); ++i) {
        switch (Firmware->GetCell(i).ReturnData()) {
            case Microcode::OP_HLT : {
                CurrentRuntime->AddOperation(new HLT(&CurrentRuntime));
                break;
            }
            case Microcode::OP_ADD : {
                CurrentRuntime->AddOperation(new ADD(Firmware->GetCell(i+1), Firmware->GetCell(i+2),CurrentRuntime));
                i+=2;
                break;
            }
            case Microcode::OP_JMP : {
                CurrentRuntime->AddOperation(new ADD(Firmware->GetCell(i+1),0,CurrentRuntime));
                i+=2;
                break;
            }
            case Microcode::OP_MOV : {
                CurrentRuntime->AddOperation(new MOV(Firmware->GetCell(i+1),Firmware->GetCell(i+2),CurrentRuntime));
                i+=2;
                break;
            }
            case Microcode::OP_CMV : {
                CurrentRuntime->AddOperation(new CMV(Firmware->GetCell(i+1),Firmware->GetCell(i+2),CurrentRuntime));
                i+=2;
                break;
            }
            case Microcode::OP_SCL : {
                CurrentRuntime->AddOperation(new SCL(Firmware->GetCell(i+1),Firmware->GetCell(i+2),CurrentRuntime));
                i+=2;
                break;
            }
            case Microcode::OP_PUSH : {
                CurrentRuntime->AddOperation(new PSH(Firmware->GetCell(i+1),CurrentRuntime));
                i+=2;
                break;
            }
            case Microcode::OP_POP : {
                CurrentRuntime->AddOperation(new POP(Firmware->GetCell(i+1),CurrentRuntime));
                i+=2;
                break;
            }// Доделать!!! Написать анализатор и после этого уже добавить недостающие коды операций!!!
        }
    }
}
