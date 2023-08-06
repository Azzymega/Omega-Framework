//
// Created by Danil on 06.08.2023.
//

#ifndef LEGACYRUNTIME_STRINGPARAMETERS_H
#define LEGACYRUNTIME_STRINGPARAMETERS_H


#include "ObjectsPrimitives/Parameter.h"
#include "../CTS/String.h"

class StringParameters : public Parameter {
private:
    String Data;
public:
    StringParameters(String);
};


#endif //LEGACYRUNTIME_STRINGPARAMETERS_H
