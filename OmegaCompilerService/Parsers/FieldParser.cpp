//
// Created by Danil on 16.08.2023.
//

#include "FieldParser.h"

AbstractToken *FieldParser::ParseToken(std::vector<char> Data) {
    std::vector<std::string> Definitions;
    std::string ReturnType;
    std::string Definition;
    std::string Name;
    std::vector<char> Internals;
    for (int i = 0; i < Data.size(); ++i) {
        if (Data.at(i) == DEFINITION_TOKEN){
            for (; i < Data.size(); ++i) {
                if (Data.at(i) == DEFINITION_TOKEN || Data.at(i) == INTERNALS_BEGINS){
                    Definitions.push_back(Definition);
                    Definition.clear();
                    break;
                }
                Definition+=Data.at(i);
            }
        }
    }
    ReturnType = Definitions[1];
    Name = Definition[2];
    for (int i = 0; i < Data.size(); ++i) {
        if(Data.at(i) == INTERNALS_BEGINS){
            for (int j = i; j < Data.size(); ++j) {
                if (Data.at(j) == INTERNALS_ENDS){
                    break;
                }
                Internals.push_back(Data.at(j));
            }
            break;
        }
    }
    return new FieldToken(Name,std::vector<char>(),ReturnType);
}
