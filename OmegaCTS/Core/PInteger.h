//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_PINTEGER_H
#define LEGACYRUNTIME_PINTEGER_H


#include "PrimitiveReturnables.h"

class PInteger : public PrimitiveReturnables{
private:
    int Data;
public:
    PInteger(std::wstring name, int Data);
    void * ReturnData() override;
};


#endif //LEGACYRUNTIME_PINTEGER_H
