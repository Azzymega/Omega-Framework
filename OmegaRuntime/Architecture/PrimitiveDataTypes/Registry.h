//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_REGISTRY_H
#define LIBRNT_REGISTRY_H


#include <map>
#include "../PrimitiveAbstractions/Archive.h"
#include "../ArchitecturalDefines/RegistersType.h"

class Registry : public Archive{
private:
    std::map<Word,Word> Data;
public:
    Registry();
    void AddNote(Word,Word);
    void SetNote(Word,Word);
    Word GetNote(Word);
};


#endif //LIBRNT_REGISTRY_H
