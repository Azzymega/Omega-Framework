//
// Created by Danil on 15.08.2023.
//

#include "InstructionParser.h"

AbstractToken* InstructionParser::ParseToken(std::vector<char> Data) {
    std::string Name;
    std::string StringType;
    std::vector<char> Parameter;
    Microcode Type;
    for (char Letter : Data) {
        if (Letter == ILUtility::INSTRUCTION_NAME_END){
            break;
        }
        StringType+=Letter;
    }
    for (int i = 0; i < Data.size(); ++i) {
        if (Data.at(i) == ILUtility::INSTRUCTION_NAME_END){
            for (int j = i; j < Data.size(); ++j) {
                if (Data.at(j) == ILUtility::INSTRUCTION_END){
                    break;
                }
                Parameter.push_back(Data.at(j));
            }
        }
    }
    if (StringType == "isload"){
        Type = Microcode::OP_ISLOAD;
    }
    else if (StringType == "pop"){
        Type = Microcode::OP_POP;
    }
    else if (StringType == "add"){
        Type = Microcode::OP_ADD;
    }
    else if (StringType == "siload"){
        Type = Microcode::OP_SILOAD;
    }
    else if (StringType == "sload"){
        Type = Microcode::OP_SLOAD;
    }
    return new InstructionToken(Name,Parameter,Type);
}
