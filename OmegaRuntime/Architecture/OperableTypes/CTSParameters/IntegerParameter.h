//
// Created by Danil on 06.08.2023.
//

#ifndef LEGACYRUNTIME_INTEGERPARAMETER_H
#define LEGACYRUNTIME_INTEGERPARAMETER_H


#include "../ObjectsPrimitives/Parameter.h"
#include "../../CTS/Integer.h"

class IntegerParameter : public Parameter{
private:
    Integer Data;
public:
    IntegerParameter(Integer,int);
    Type * ReturnParameter() override;
};


#endif //LEGACYRUNTIME_INTEGERPARAMETER_H
