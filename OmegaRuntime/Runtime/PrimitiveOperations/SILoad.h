//
// Created by Danil on 04.08.2023.
//

#ifndef LEGACYRUNTIME_SILOAD_H
#define LEGACYRUNTIME_SILOAD_H

#include "../Core/Runtime.h"
#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Command.h"

class SILoad : public Command {
public:
    Word PerformOperation() override;
    SILoad(std::vector<Parameter *> unnamed, void *unnamed1);
};


#endif //LEGACYRUNTIME_SILOAD_H
