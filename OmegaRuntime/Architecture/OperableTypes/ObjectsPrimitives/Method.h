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
    MethodParametersType ReturnType;
    std::vector<Field> Parameters;
    std::vector<MethodParametersType> ParametersTypes;
    std::vector<Operation*> Operations;
public:
    Method(std::string,MethodParametersType);
    void AppendParameter(Field);
    void AppendOperation(Operation*);
    void AppendParameterType(MethodParametersType);
};


#endif //LEGACYRUNTIME_METHOD_H
