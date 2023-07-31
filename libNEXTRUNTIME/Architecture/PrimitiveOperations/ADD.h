//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_ADD_H
#define LIBRNT_ADD_H


#include "../PrimitiveAbstractions/Operation.h"

class ADD : public Operation {
public:
    ADD(Cell, Cell, class Runtime*);
    Word PerformOperation(Word, Word) override
};


#endif //LIBRNT_ADD_H
