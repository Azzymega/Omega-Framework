//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_ABSTRACTSTACKFACTORY_H
#define LEGACYRUNTIME_ABSTRACTSTACKFACTORY_H


#include "../Core/AbstractToken.h"
#include "../../OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h"

class AbstractStackFactory {
public:
    virtual Stack BuildStack(AbstractToken*) = 0;
};


#endif //LEGACYRUNTIME_ABSTRACTSTACKFACTORY_H
