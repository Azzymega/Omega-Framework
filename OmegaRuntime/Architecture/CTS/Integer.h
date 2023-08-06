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
public:
    Integer(Word);
};


#endif //LEGACYRUNTIME_INTEGER_H
