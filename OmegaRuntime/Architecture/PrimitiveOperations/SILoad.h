//
// Created by Danil on 04.08.2023.
//

#ifndef LEGACYRUNTIME_SILOAD_H
#define LEGACYRUNTIME_SILOAD_H

#include "../../Runtime/Core/Runtime.h"
#include "../PrimitiveAbstractions/Command.h"

class SILoad : public Command {
public:
    Word PerformOperation() override;
};


#endif //LEGACYRUNTIME_SILOAD_H