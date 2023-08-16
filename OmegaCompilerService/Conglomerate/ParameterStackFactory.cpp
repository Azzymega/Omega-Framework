//
// Created by Danil on 16.08.2023.
//

#include "ParameterStackFactory.h"
#include "../Core/ParameterToken.h"

Stack ParameterStackFactory::BuildStack(AbstractToken * Parameter) {
    auto* Token = static_cast<ParameterToken *>(Parameter);
    Stack CurrentStack;
    CurrentStack.AppendCell(Cell(Token->ReturnNumber()));
    CurrentStack.AppendCell(Cell(Token->ReturnType()));
    for ( char Info : Token->ReturnInternals()) {
        CurrentStack.AppendCell(Cell(Info));
    }
    return CurrentStack;
}
