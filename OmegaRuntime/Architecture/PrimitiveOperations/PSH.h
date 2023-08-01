//
// Created by Danil on 01.08.2023.
//

#ifndef LEGACYRUNTIME_PSH_H
#define LEGACYRUNTIME_PSH_H


#include "../PrimitiveAbstractions/Operation.h"

class PSH : public Operation {
public:
    Word PerformOperation(Word, Word) override;
    PSH(Cell, class Runtime*);
};

#endif //LEGACYRUNTIME_PSH_H
