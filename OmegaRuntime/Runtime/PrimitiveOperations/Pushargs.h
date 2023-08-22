//
// Created by Danil on 22.08.2023.
//

#ifndef LEGACYRUNTIME_PUSHARGS_H
#define LEGACYRUNTIME_PUSHARGS_H

#include "../Core/Runtime.h"
#include "../../../OmegaAbstractionComponents/Architecture/ArchitecturalDefines/Core/Core.h"
#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Command.h"

class Pushargs : public Command{
public:
    Word PerformOperation() override;
    Pushargs(std::vector<Parameter *> unnamed, void *unnamed1);
};

#endif //LEGACYRUNTIME_PUSHARGS_H
