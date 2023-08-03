//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_METHOD_H
#define LEGACYRUNTIME_METHOD_H


#include <vector>
#include "Field.h"
#include "../../PrimitiveAbstractions/Operation.h"

class Method {
private:
    std::string Name;
    std::vector<class Field> Parameters;
    std::vector<Operation*> Operations;
};


#endif //LEGACYRUNTIME_METHOD_H
