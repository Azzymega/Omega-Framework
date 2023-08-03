//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_INTEGER_H
#define LEGACYRUNTIME_INTEGER_H


#include "Type.h"
#include "../ArchitecturalDefines/RegistersType.h"

class Integer : public Type{
private:
    Word Data;
};


#endif //LEGACYRUNTIME_INTEGER_H
