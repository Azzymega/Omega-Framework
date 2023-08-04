//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_METHOD_H
#define LEGACYRUNTIME_METHOD_H


#include <vector>
#include "Field.h"
#include "../../PrimitiveAbstractions/Command.h"

class Method {
private:
    std::string Name;
    MethodParametersType ReturnType;
    std::vector<Field> Parameters;
    std::vector<MethodParametersType> ParametersTypes;
    std::vector<Command*> Operations;
public:
    Method(std::string,MethodParametersType);
    void Execute();
    std::string ReturnName();
    void AppendParameter(Field);
    void AppendOperation(Command*);
    void AppendParameterType(MethodParametersType);
};


#endif //LEGACYRUNTIME_METHOD_H
