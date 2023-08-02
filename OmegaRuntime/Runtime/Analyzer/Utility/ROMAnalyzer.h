//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_ROMANALYZER_H
#define LIBRNT_ROMANALYZER_H

#include "../../../Architecture/PrimitiveOperations/HLT.h"
#include "../Abstract/StaticAnalyzer.h"

class ROMAnalyzer : public StaticAnalyzer {
public:
    void Analyze(Stack *, Runtime* ,Function *);
};


#endif //LIBRNT_ROMANALYZER_H
