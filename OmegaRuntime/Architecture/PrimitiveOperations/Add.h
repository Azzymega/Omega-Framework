//
// Created by Danil on 04.08.2023.
//

#ifndef LEGACYRUNTIME_ADD_H
#define LEGACYRUNTIME_ADD_H

#include "../../Runtime/Core/Runtime.h"
#include "../PrimitiveAbstractions/Command.h"

class Add : public Command{
public:
    Word PerformOperation() override;
};


#endif //LEGACYRUNTIME_ADD_H
