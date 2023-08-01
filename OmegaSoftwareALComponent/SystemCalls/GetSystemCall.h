//
// Created by Danil on 30.07.2023.
//

#ifndef LIBRNT_GETSYSTEMCALL_H
#define LIBRNT_GETSYSTEMCALL_H


#include <string>
#include "../BasicAbstractions/SystemCall.h"

class GetSystemCall : public SystemCall{
private:
    std::string InputtedData;
public:
    std::string ReturnInputtedData();
    GetSystemCall();
    void Execute() override;
    void* ReturnRequest() override;
};


#endif //LIBRNT_GETSYSTEMCALL_H
