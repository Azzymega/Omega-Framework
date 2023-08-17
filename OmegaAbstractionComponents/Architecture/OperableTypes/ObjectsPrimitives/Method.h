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
    std::string ReturnType;
    std::vector<Parameter> Parameters;
    std::vector<Command*> Operations;
public:
    Method(const std::string&,std::string);
    void Execute();
    std::string ReturnName();
    void AppendParameter(const Parameter&);
    void AppendOperation(Command*);
};


#endif //LEGACYRUNTIME_METHOD_H
