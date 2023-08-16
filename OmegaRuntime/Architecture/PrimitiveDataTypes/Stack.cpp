//
// Created by Danil on 31.07.2023.
//

#include "Stack.h"

void Stack::AppendCell(Cell CurrentCell) {
    Cells.push_back(CurrentCell);
}

Cell Stack::GetCell(int Index) {
    return Cells[Index];
}

Stack::Stack() {
    this->Cells = std::vector<Cell>();
}

int Stack::ReturnCellsSize() {
    return Cells.size();
}

void Stack::AppendStackToStack(Stack AnotherStack) {
    for ( Cell CurrentCell : AnotherStack.Cells) {
        this->AppendCell(CurrentCell);
    }
}

void Stack::AppendVectorOfStackToStack(std::vector<Stack> AnotherStacks) {
    for ( Stack AnotherStack : AnotherStacks) {
        for (Cell CurrentCell: AnotherStack.Cells) {
            this->AppendCell(CurrentCell);
        }
    }
}
