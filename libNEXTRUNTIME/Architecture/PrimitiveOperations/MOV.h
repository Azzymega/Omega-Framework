//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_MOV_H
#define LIBRNT_MOV_H


#include "../PrimitiveAbstractions/Operation.h"

class MOV : public Operation {
public:
    MOV(Cell, Cell, class Runtime*);
    Word PerformOperation(Word, Word) override;
};


#endif //LIBRNT_MOV_H
