//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_HLT_H
#define LIBRNT_HLT_H


#include "../PrimitiveAbstractions/Operation.h"

class HLT : public Operation {
public:
    HLT(void *Runtime);
    Word PerformOperation(Word, Word) override;
};


#endif //LIBRNT_HLT_H
