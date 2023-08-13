//
// Created by Danil on 13.08.2023.
//

#include <algorithm>
#include "Compiler.h"

Stack Compiler::Compile(std::string AssemblyRawData) {
    AssemblyRawData.erase(std::remove_if(AssemblyRawData.begin(),
                                         AssemblyRawData.end(),
                                         ::isspace),
                          AssemblyRawData.end());
    return Stack();
}
