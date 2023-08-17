//
// Created by Danil on 17.08.2023.
//

#ifndef LEGACYRUNTIME_PSTRING_H
#define LEGACYRUNTIME_PSTRING_H


#include "PrimitiveReturnables.h"

class PString: public PrimitiveReturnables {
private:
    std::wstring Data;
public:
    void * ReturnData() override;
    PString(std::wstring name, std::wstring Data);
};


#endif //LEGACYRUNTIME_PSTRING_H
