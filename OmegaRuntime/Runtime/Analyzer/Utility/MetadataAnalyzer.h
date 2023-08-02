//
// Created by Danil on 01.08.2023.
//

#ifndef LEGACYRUNTIME_METADATAANALYZER_H
#define LEGACYRUNTIME_METADATAANALYZER_H


#include "../Abstract/StaticAnalyzer.h"

class MetadataAnalyzer : public StaticAnalyzer {
public:
    void Analyze(Stack *, Runtime *);
};


#endif //LEGACYRUNTIME_METADATAANALYZER_H
