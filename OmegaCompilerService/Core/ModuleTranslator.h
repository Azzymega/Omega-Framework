//
// Created by Danil on 15.08.2023.
//

#ifndef LEGACYRUNTIME_MODULETRANSLATOR_H
#define LEGACYRUNTIME_MODULETRANSLATOR_H


#include "AbstractTranslator.h"

class ModuleTranslator : public AbstractTranslator {
public:
    Stack Translate(Token) override;
};


#endif //LEGACYRUNTIME_MODULETRANSLATOR_H
