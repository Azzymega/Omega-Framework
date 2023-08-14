//
// Created by Danil on 14.08.2023.
//

#include "TokenFinder.h"

Token TokenFinder::FindAssemblyData(std::string Data) {
    DefinitionTypes DType = DefinitionTypes::AssemblyT;
    std::string Name;
    std::vector<char> Internals;
    for (int i = 0; i < Data.size(); ++i) {
        std::string Type;
        if (Data.at(i) == TokenTypes::DefineStart){
            for (int j = i; j < Data.size(); ++j) {
                Type+=Data.at(j);
                if (Type == ".assembly"){
                    for (int k = j; k < Data.size(); ++k) {
                        if (Data.at(k) == TokenTypes::DefinitionStarts){
                            for (int l = j+1; l < Data.size(); ++l) {
                                if (Data.at(l) == TokenTypes::DefinitionEnds){
                                    break;
                                }
                                Internals.push_back(Data.at(l));
                            }
                            break;
                        }
                        break;
                    }
                    break;
                }
            }
        }
    }
    return {Name,Internals,DType};
}

Token TokenFinder::FindModuleData(std::string Data) {
    DefinitionTypes DType = DefinitionTypes::ModuleT;
    std::string Name;
    std::vector<char> Internals;
    for (int i = 0; i < Data.size(); ++i) {
        std::string Type;
        if (Data.at(i) == TokenTypes::DefineStart){
            for (int j = i; j < Data.size(); ++j) {
                Type+=Data.at(j);
                if (Type == ".module"){
                    for (int k = j; k < Data.size(); ++k) {
                        if (Data.at(k) == TokenTypes::DefinitionStarts){
                            for (int l = j+1; l < Data.size(); ++l) {
                                if (Data.at(l) == TokenTypes::DefinitionEnds){
                                    break;
                                }
                                Internals.push_back(Data.at(l));
                            }
                            break;
                        }
                        break;
                    }
                    break;
                }
            }
        }
    }
    return {Name,Internals,DType};
}
