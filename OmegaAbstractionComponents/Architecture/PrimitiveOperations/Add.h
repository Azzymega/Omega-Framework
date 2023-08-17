//
// Created by Danil on 04.08.2023.
//

#ifndef LEGACYRUNTIME_ADD_H
#define LEGACYRUNTIME_ADD_H

#include "../../../OmegaRuntime/Runtime/Core/Runtime.h"
#include "../PrimitiveAbstractions/Command.h"

class Add : public Command{
public:
    Word PerformOperation() override;
    Add(std::vector<Parameter *> unnamed, void *unnamed1);
};


#endif //LEGACYRUNTIME_ADD_H
