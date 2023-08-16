//
// Created by Danil on 16.08.2023.
//

#ifndef LEGACYRUNTIME_PARAMETERSTACKFACTORY_H
#define LEGACYRUNTIME_PARAMETERSTACKFACTORY_H


#include "AbstractStackFactory.h"

class ParameterStackFactory : public AbstractStackFactory {
public:
    Stack BuildStack(AbstractToken *) override;
};


#endif //LEGACYRUNTIME_PARAMETERSTACKFACTORY_H
