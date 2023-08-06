//
// Created by Danil on 03.08.2023.
//

#ifndef LEGACYRUNTIME_STRING_H
#define LEGACYRUNTIME_STRING_H

#include <vector>
#include "Type.h"

class String : public Type {
private:
    std::vector<char> Characters;
public:
    String(std::vector<char>);
};


#endif //LEGACYRUNTIME_STRING_H
