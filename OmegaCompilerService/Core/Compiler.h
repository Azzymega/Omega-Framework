//
// Created by Danil on 13.08.2023.
//

#ifndef LEGACYRUNTIME_COMPILER_H
#define LEGACYRUNTIME_COMPILER_H


#include <string>
#include "../../OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h"

class Compiler {
public:
    Stack Compile(std::string);
};


#endif //LEGACYRUNTIME_COMPILER_H
