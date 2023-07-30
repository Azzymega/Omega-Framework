//
// Created by Danil on 30.07.2023.
//

#ifndef LIBRNT_SYSTEMCALLMANAGER_H
#define LIBRNT_SYSTEMCALLMANAGER_H


#include <vector>
#include "../BasicAbstractions/SystemCall.h"
#include "../Utility/AbstractData.h"

class SystemCallManager {
private:
    std::vector<SystemCall*> SystemCallsList;
public:
    SystemCall ReturnSystemCall(int);
    void AddSystemCall(SoftwareAbstractions,AbstractData);
    void ExecuteAllCalls(AbstractData*);
};


#endif //LIBRNT_SYSTEMCALLMANAGER_H
