//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_INSTRUCTIONSTACKFACTORY_H
#define LEGACYRUNTIME_INSTRUCTIONSTACKFACTORY_H

#include "../Core/InstructionToken.h"
#include "AbstractStackFactory.h"

class InstructionStackFactory : public AbstractStackFactory{
public:
    Stack BuildStack(AbstractToken *) override;
};


#endif //LEGACYRUNTIME_INSTRUCTIONSTACKFACTORY_H
