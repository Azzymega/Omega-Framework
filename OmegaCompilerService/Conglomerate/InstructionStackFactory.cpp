//
// Created by Danil on 15.08.2023.
//

#include "InstructionStackFactory.h"

Stack InstructionStackFactory::BuildStack(InstructionToken * Token, std::vector<Stack> ParametersStacks) { // ДОПИСАТЬ!!
    InstructionToken* CurrentToken = static_cast<InstructionToken *>(Token); // Структура должна быть как и у анализаторов. Слоистая.
    Stack CurrentStack; // Неудивительно, что писать трансляторы в байт код проще, когда есть его распаковка в абстракции.
    CurrentStack.AppendCell(Cell(CurrentToken->ReturnType())); // Нужно было сначало писать парсер параметром, он является самым низшим в абстракции.
    CurrentStack.AppendVectorOfStackToStack(ParametersStacks);
    return CurrentStack;
}
