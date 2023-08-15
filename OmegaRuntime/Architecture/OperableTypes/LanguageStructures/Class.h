//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_CLASS_H
#define LEGACYRUNTIME_CLASS_H


#include "../RuntimeAbstractions/ObjectIdentifier.h"

class Class : public Object {
public:
    Class(const std::string&, void*,std::vector<Field>,std::vector<Method>);
};


#endif //LEGACYRUNTIME_CLASS_H
