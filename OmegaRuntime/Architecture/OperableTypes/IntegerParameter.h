//
// Created by Danil on 06.08.2023.
//

#ifndef LEGACYRUNTIME_INTEGERPARAMETER_H
#define LEGACYRUNTIME_INTEGERPARAMETER_H


#include "ObjectsPrimitives/Parameter.h"
#include "../CTS/Integer.h"

class IntegerParameter : public Parameter{
private:
    class Integer Data;
public:
    IntegerParameter(class Integer);
};


#endif //LEGACYRUNTIME_INTEGERPARAMETER_H
