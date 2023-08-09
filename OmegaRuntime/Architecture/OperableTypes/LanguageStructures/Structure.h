//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_STRUCTURE_H
#define LEGACYRUNTIME_STRUCTURE_H


#include "../ObjectIdentifier.h"

class Structure : public Object {
public:
    Structure(const std::string&, void *unnamed1);

    Structure(const std::string &unnamed, void *unnamed1, std::vector<Field> F, std::vector<Method> M);
};


#endif //LEGACYRUNTIME_STRUCTURE_H
