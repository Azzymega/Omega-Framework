//
// Created by Danil on 02.08.2023.
//

#include "Lexer.h"

void Lexer::AppendString(std::string Definition) {
    this->AssemblyCodeLines.push_back(Definition);
}

Lexer::Lexer() {
    this->AssemblyCodeLines = std::vector<std::string>();
}
