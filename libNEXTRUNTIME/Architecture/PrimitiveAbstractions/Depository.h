//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_DEPOSITORY_H
#define LIBRNT_DEPOSITORY_H


#include "../ArchitecturalDefines/RegistersType.h"

class Depository {
private:
    Word Data;
public:
    Depository(Word);
    Word ReturnData();
    void GetData(Word);
};


#endif //LIBRNT_DEPOSITORY_H
