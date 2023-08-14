//
// Created by Danil on 14.08.2023.
//

#include "AssemblyTranslator.h"

Stack AssemblyTranslator::TranslateAssembly(Token AssemblyData) {
    Stack AssemblyStack;
    std::string AssemblyName;
    AssemblyStack.AppendCell(Cell(TokenTypes::AssemblyNameStarts));
    AssemblyName = AssemblyData.ReturnName();
    for (char Char : AssemblyName) {
        AssemblyStack.AppendCell(Cell(Char));
    }
    AssemblyStack.AppendCell(Cell(TokenTypes::AssemblyNameEnds));
    return AssemblyStack;
}
