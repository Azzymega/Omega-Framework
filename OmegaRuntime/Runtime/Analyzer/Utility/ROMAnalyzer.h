//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_ROMANALYZER_H
#define LIBRNT_ROMANALYZER_H

#include "../../../Architecture/Legacy/HLT.h"
#include "../Abstract/StaticAnalyzer.h"

class ROMAnalyzer : public StaticAnalyzer {
public:
    void Analyze(Stack *, Runtime *) override;
};


#endif //LIBRNT_ROMANALYZER_H
