//
// Created by Danil on 02.08.2023.
//

#include <sstream>
#include "ByteCodeMachine.h"

ByteCodeMachine::ByteCodeMachine(const std::string& Filepath) {
    this->ReadStream = new std::ifstream(Filepath);
    this->ILexer = InstructionsLexer();
    this->MTLexer = MetadatasLexer();
    this->Code = std::vector<char>();
}

void ByteCodeMachine::StartMetadataLexing() { // Переписать на многострочную структуру!!!
    std::string Metadata;
    int MetadataStarts = 0;
    int MetadataEnds = 0;
    for (int i = Datapointer; i < Code.size(); ++i) {
        if (Code[i] == LexersType::MetadataLexer){
            MetadataStarts = i+1;
            break;
        }
    }
    for (int i = MetadataStarts; i < Code.size(); ++i) {
        if (Code[i] == LexersType::MetadataLexerEnd){
            MetadataEnds = i;
            break;
        }
    }
    for (int i = MetadataStarts; i < MetadataEnds; ++i) {
        Metadata+=Code[i];
    }
    MTLexer.AppendString(Metadata);
    Datapointer = MetadataEnds+1;
}

void ByteCodeMachine::LoadCode() {
    char Byte;
    while (*ReadStream >> Byte){
        Code.push_back(Byte);
    }
}

void ByteCodeMachine::StartInstructionLexing() {
    std::string Charcode;
    std::vector<std::string> Instructions;
    int InstructionsStart = 0;
    int InstructionsEnd = 0;
    for (int i = Datapointer; i < Code.size(); ++i) {
        if (Code[i] == LexersType::InstructionLexer){
            InstructionsStart = i+1;
            break;
        }
    }
    for (int i = InstructionsStart; i < Code.size(); ++i) {
        if (Code[i] == LexersType::InstructionLexerEnd){
            InstructionsEnd = i;
            break;
        }
    }
    for (int i = InstructionsStart; i < InstructionsEnd; ++i) {
        Charcode+=Code[i];
    }
    std::istringstream ISS(Charcode);
    std::string Ins;
    while (std::getline(ISS,Ins))
    {
        Instructions.push_back(Ins);
    }
    for (const std::string& Instruction : Instructions) {
        ILexer.AppendString(Instruction);
    }
}
