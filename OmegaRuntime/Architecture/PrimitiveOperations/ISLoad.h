//
// Created by Danil on 04.08.2023.
//

#ifndef LEGACYRUNTIME_ISLOAD_H
#define LEGACYRUNTIME_ISLOAD_H

#include "../../Runtime/Core/Runtime.h"
#include "../PrimitiveAbstractions/Command.h"

class ISLoad : public Command {
public:
    Word PerformOperation() override;
    ISLoad(std::vector<Parameter *> unnamed, void *unnamed1);
};


#endif //LEGACYRUNTIME_ISLOAD_H
