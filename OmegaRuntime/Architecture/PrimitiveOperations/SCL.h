//
// Created by Danil on 01.08.2023.
//

#ifndef LIBRNT_SCL_H
#define LIBRNT_SCL_H


#include "../PrimitiveDataTypes/Cell.h"
#include "../PrimitiveAbstractions/Operation.h"
#include "../../../OmegaSoftwareALComponent/BasicAbstractions/SoftwareAbstractionLayer.h"
#include "../../../OmegaSoftwareALComponent/SystemCalls/PrintSystemCall.h"
#include "../../../OmegaSoftwareALComponent/Utility/AbstractData.h"
#include "../../Runtime/Core/Runtime.h"

class SCL : public Operation {
public:
    SCL(Cell, Cell, class Runtime*);
    Word PerformOperation(Word, Word) override;
};


#endif //LIBRNT_SCL_H
