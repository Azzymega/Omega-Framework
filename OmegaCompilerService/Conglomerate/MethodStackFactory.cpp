//
// Created by Danil on 16.08.2023.
//

#include "MethodStackFactory.h"

#include <utility>

Stack MethodStackFactory::BuildStack(MethodToken * Token, std::vector<Stack> Instructions, std::vector<Stack> Params) {
    Stack CurrentStack;
    CurrentStack.AppendCell(Cell(MethodReturnTypeStarts));
    for ( char Letter : Token->ReturnStringType()) {
        CurrentStack.AppendCell(Cell(Letter));
    }
    CurrentStack.AppendCell(Cell(MethodReturnTypeEnds));
    CurrentStack.AppendCell(Cell(MethodNameStarts));
    for ( char Letter : Token->ReturnName()) {
        CurrentStack.AppendCell(Cell(Letter));
    }
    CurrentStack.AppendCell(Cell(MethodNameEnds));
    CurrentStack.AppendVectorOfStackToStack(std::move(Instructions));
    CurrentStack.AppendVectorOfStackToStack(std::move(Params));
    return CurrentStack;
}
