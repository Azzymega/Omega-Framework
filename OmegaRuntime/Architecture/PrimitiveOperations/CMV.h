//
// Created by Danil on 01.08.2023.
//

#ifndef LIBRNT_CMV_H
#define LIBRNT_CMV_H


#include "../PrimitiveAbstractions/Operation.h"

class CMV : public Operation {
public:
    CMV(Cell, Cell, class Runtime*);
    Word PerformOperation(Word, Word) override;
};


#endif //LIBRNT_CMV_H
