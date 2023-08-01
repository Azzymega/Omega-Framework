//
// Created by Danil on 30.07.2023.
//

#include "SystemCallManager.h"
#include "../SystemCalls/GetSystemCall.h"
#include "../SystemCalls/PrintSystemCall.h"

SystemCall SystemCallManager::ReturnSystemCall(int Index) {
    return *SystemCallsList.at(Index);
}

void SystemCallManager::AddSystemCall(SoftwareAbstractions SystemCallID, AbstractData Data) {
    switch (SystemCallID) {
        case SoftwareAbstractions::Get :
            SystemCallsList.push_back(new GetSystemCall());
            break;
        case SoftwareAbstractions::Print :
            SystemCallsList.push_back(new PrintSystemCall(Data.Data[0]));
    }
}

void SystemCallManager::ExecuteAllCalls(AbstractData* Output) {
    for (SystemCall* Call : SystemCallsList) {
        Call->Execute();
        Output->Data.push_back(*(char*)Call->ReturnRequest());
    }
}
