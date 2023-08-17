//
// Created by Danil on 16.08.2023.
//

#ifndef LEGACYRUNTIME_FIELDTOKEN_H
#define LEGACYRUNTIME_FIELDTOKEN_H


#include "AbstractToken.h"

class FieldToken : public AbstractToken {
private:
    std::string ReturnType;
public:
    FieldToken(std::string unnamed, std::vector<char> unnamed3, std::string);
    std::string ReturnStringType();
};


#endif //LEGACYRUNTIME_FIELDTOKEN_H
