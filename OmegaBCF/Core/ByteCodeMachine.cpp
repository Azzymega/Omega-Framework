//
// Created by Danil on 02.08.2023.
//

#include "ByteCodeMachine.h"

ByteCodeMachine::ByteCodeMachine(std::string Filepath) {
    this->ReadStream = new std::ifstream(Filepath);
    this->ILexer = InstructionsLexer();
    this->MTLexer = MetadataLexer();
    this->Code = std::vector<char>();
}

void ByteCodeMachine::StartMetadataLexing() {
    std::string Metadata;
    int MetadataStarts;
    int MetadataEnds;
    for (int i = 0; i < Code.size(); ++i) {
        if (Code[i] == LexersType::MetadataLexer){
            MetadataStarts = i+1;
            break;
        }
    }
    for (int i = MetadataStarts; i < Code.size(); ++i) {
        if (Code[i] == LexersType::MetadataLexerEnd){
            break;
        }
    }
    for (int i = MetadataStarts; i < MetadataEnds; ++i) {
        Metadata+=Code[i];
    }
    MTLexer
}

void ByteCodeMachine::LoadCode() {
    char Byte;
    while (*ReadStream >> Byte){
        Code.push_back(Byte);
    }
}
