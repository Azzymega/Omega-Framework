//
// Created by Danil on 22.08.2023.
//

#ifndef LEGACYRUNTIME_INITOBJ_H
#define LEGACYRUNTIME_INITOBJ_H

#include "../Core/Runtime.h"
#include "../../../OmegaAbstractionComponents/Architecture/ArchitecturalDefines/Core/Core.h"
#include "../../../OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Command.h"

class Initobj : public Command{
public:
    Word PerformOperation() override;
    Initobj(std::vector<Parameter *> unnamed, void *unnamed1);
};


#endif //LEGACYRUNTIME_INITOBJ_H
