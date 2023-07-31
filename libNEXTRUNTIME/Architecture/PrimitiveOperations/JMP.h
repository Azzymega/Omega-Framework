//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_JMP_H
#define LIBRNT_JMP_H


#include "../PrimitiveAbstractions/Operation.h"

class JMP : public Operation {
public:
    JMP(Cell, Cell, class Runtime*);
    Word PerformOperation(Word, Word) override;
};


#endif //LIBRNT_JMP_H
