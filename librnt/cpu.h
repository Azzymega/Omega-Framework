//
// Created by Danil on 28.07.2023.
//

#ifndef RUNTIME_CPU_H
#define RUNTIME_CPU_H


struct cpu {
    char memory[256];
    char registers[3];
    char* instructionPointer;
};


#endif //RUNTIME_CPU_H
