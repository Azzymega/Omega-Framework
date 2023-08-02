//
// Created by Danil on 02.08.2023.
//

#ifndef LEGACYRUNTIME_BYTECODEMACHINE_H
#define LEGACYRUNTIME_BYTECODEMACHINE_H

#include "../Architecture/ArchitectureDefines.h"
#include <fstream>
#include <vector>
#include "Lexers/InstructionsLexer.h"
#include "Lexers/MetadatasLexer.h"

class ByteCodeMachine {
private:
    std::ifstream* ReadStream;
    std::vector<char> Code;
    InstructionsLexer ILexer;
    class MetadatasLexer MTLexer;
    int Datapointer = 0;
public:
    ByteCodeMachine(const std::string&);
    void LoadCode();
    void StartMetadataLexing();
    void StartInstructionLexing();
};


#endif //LEGACYRUNTIME_BYTECODEMACHINE_H
