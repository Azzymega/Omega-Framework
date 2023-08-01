//
// Created by Danil on 01.08.2023.
//

#ifndef LEGACYRUNTIME_POP_H
#define LEGACYRUNTIME_POP_H

#include "../PrimitiveAbstractions/Operation.h"

class POP : public Operation {
public:
    Word PerformOperation(Word, Word) override;
    POP(Cell, class Runtime*);
};



#endif //LEGACYRUNTIME_POP_H
