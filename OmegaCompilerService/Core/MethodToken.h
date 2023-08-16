//
// Created by Danil on 16.08.2023.
//

#ifndef LEGACYRUNTIME_METHODTOKEN_H
#define LEGACYRUNTIME_METHODTOKEN_H


#include "AbstractToken.h"

class MethodToken : public AbstractToken {
private:
    std::string ReturnType;
public:
    MethodToken(std::string unnamed, std::vector<char> unnamed1, std::string);
};


#endif //LEGACYRUNTIME_METHODTOKEN_H
