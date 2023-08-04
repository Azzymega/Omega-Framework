//
// Created by Danil on 04.08.2023.
//

#ifndef LEGACYRUNTIME_POP_H
#define LEGACYRUNTIME_POP_H

#include "../../Runtime/Core/Runtime.h"
#include "../PrimitiveAbstractions/Command.h"

class Pop : public Command {
public:
    Word PerformOperation() override;
};


#endif //LEGACYRUNTIME_POP_H
