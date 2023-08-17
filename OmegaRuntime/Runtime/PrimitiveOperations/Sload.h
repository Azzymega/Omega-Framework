//
// Created by Danil on 04.08.2023.
//

#ifndef LEGACYRUNTIME_SLOAD_H
#define LEGACYRUNTIME_SLOAD_H

#include "../Core/Runtime.h"
#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Command.h"

class Sload  : public Command {
public:
    Word PerformOperation() override;
    Sload(std::vector<Parameter *> unnamed, void *unnamed1);
};


#endif //LEGACYRUNTIME_SLOAD_H
