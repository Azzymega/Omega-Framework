//
// Created by Danil on 30.07.2023.
//

#ifndef LIBRNT_PRINTSYSTEMCALL_H
#define LIBRNT_PRINTSYSTEMCALL_H


#include "../BasicAbstractions/SystemCall.h"

class PrintSystemCall : public SystemCall {
private:
    char PrintableData;
public:
    [[nodiscard]] char ReturnPrintableData() const;
    explicit PrintSystemCall(char);
    void Execute() override;
    void* ReturnRequest() override;
};


#endif //LIBRNT_PRINTSYSTEMCALL_H
