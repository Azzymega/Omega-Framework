//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_ABSTRACTTOKEN_H
#define LEGACYRUNTIME_ABSTRACTTOKEN_H


#include <string>
#include <vector>

class AbstractToken {
protected:
    std::string Name;
    std::vector<char> Internals;
public:
    AbstractToken(std::string, std::vector<char>);
    std::string ReturnName();
};


#endif //LEGACYRUNTIME_ABSTRACTTOKEN_H
