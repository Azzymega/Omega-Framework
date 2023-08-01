//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_STATICANALYZER_H
#define LIBRNT_STATICANALYZER_H


#include "../../Core/Runtime.h"

class StaticAnalyzer {
public:
    virtual void Analyze(Stack*,Runtime*) = 0;
};


#endif //LIBRNT_STATICANALYZER_H
