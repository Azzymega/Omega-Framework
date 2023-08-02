//
// Created by Danil on 02.08.2023.
//

#ifndef LEGACYRUNTIME_OBJECT_H
#define LEGACYRUNTIME_OBJECT_H


#include <string>

class Object {
protected:
    std::string ObjectName;
public:
    Object(std::string);
    void SetName(std::string Name);
};


#endif //LEGACYRUNTIME_OBJECT_H
