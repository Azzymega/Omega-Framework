//
// Created by Danil on 30.07.2023.
//

#ifndef LIBRNT_SYSTEMCALL_H
#define LIBRNT_SYSTEMCALL_H
#include "SoftwareAbstractionLayer.h"

class SystemCall {
private:
    SoftwareAbstractions SystemCallID;
public:
    SystemCall(char);
    virtual void Execute();
    virtual void* ReturnRequest();
};


#endif //LIBRNT_SYSTEMCALL_H
