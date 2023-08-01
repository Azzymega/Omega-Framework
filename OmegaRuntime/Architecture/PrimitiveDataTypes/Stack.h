//
// Created by Danil on 31.07.2023.
//

#ifndef LIBRNT_STACK_H
#define LIBRNT_STACK_H


#include <vector>
#include "Cell.h"
#include "../PrimitiveAbstractions/Archive.h"

class Stack : public Archive{
protected:
    std::vector<Cell> Cells;
public:
    Stack();
    int ReturnCellsSize();
    void AppendCell(Cell);
    Cell GetCell(int);
};


#endif //LIBRNT_STACK_H
