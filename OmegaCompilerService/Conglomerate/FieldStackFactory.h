//
// Created by Danil on 16.08.2023.
//

#ifndef LEGACYRUNTIME_FIELDSTACKFACTORY_H
#define LEGACYRUNTIME_FIELDSTACKFACTORY_H


#include "AbstractStackFactory.h"
#include "../Core/FieldToken.h"

class FieldStackFactory : public AbstractStackFactory{
public:
    Stack BuildStack(FieldToken *, std::vector<Stack>);
};


#endif //LEGACYRUNTIME_FIELDSTACKFACTORY_H
