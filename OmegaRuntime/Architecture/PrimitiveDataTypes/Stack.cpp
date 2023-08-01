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
