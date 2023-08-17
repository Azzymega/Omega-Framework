//
// Created by Danil on 04.08.2023.
//

#ifndef LEGACYRUNTIME_POP_H
#define LEGACYRUNTIME_POP_H

#include "../Core/Runtime.h"
#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Command.h"

class Pop : public Command {
public:
    Word PerformOperation() override;
    Pop(std::vector<Parameter *> unnamed, void *unnamed1);
};


#endif //LEGACYRUNTIME_POP_H
