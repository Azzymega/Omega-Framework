//
// Created by Danil on 16.08.2023.
//

#ifndef LEGACYRUNTIME_METHODSTACKFACTORY_H
#define LEGACYRUNTIME_METHODSTACKFACTORY_H


#include "AbstractStackFactory.h"
#include "../Core/MethodToken.h"

class MethodStackFactory : public AbstractStackFactory{ // Написать!!!
public:
    Stack BuildStack(MethodToken *, std::vector<Stack>, std::vector<Stack>);
};


#endif //LEGACYRUNTIME_METHODSTACKFACTORY_H
