//
// Created by Danil on 28.07.2023.
//

#include <iostream>
#include "microcode.h"

void firmware::interpret(void * image, int imageSize, cpu centralPU) {
    memcpy(&centralPU.memory[0],image,imageSize);
    centralPU.instructionPointer = &centralPU.memory[0];
    for (int i = 0; i <= imageSize; ++i) {
        switch (*centralPU.instructionPointer) {
            case microcode::halt :
                std::cout << "halt";
                i+=1;
                break;
            case microcode::jmp :
                centralPU.instructionPointer = reinterpret_cast<char *>(*(centralPU.instructionPointer + 1));
                centralPU.instructionPointer+=2;
                i+=2;
                break;
            case microcode::add :
                centralPU.registers[*(centralPU.instructionPointer+1)] += centralPU.registers[*(centralPU.instructionPointer+2)];
                centralPU.instructionPointer+=3;
                i+=3;
                break;
            case microcode::mov :
                centralPU.registers[*(centralPU.instructionPointer+1)] = centralPU.registers[*(centralPU.instructionPointer+2)];
                centralPU.instructionPointer+=3;
                i+=3;
                break;
            case microcode::cmov :
                centralPU.registers[(*(centralPU.instructionPointer+1))-1] = *(centralPU.instructionPointer+2);
                centralPU.instructionPointer+=3;
                i+=3;
                break;
            case microcode::sub :
                centralPU.registers[*(centralPU.instructionPointer+1)] -= centralPU.registers[*(centralPU.instructionPointer+2)];
                centralPU.instructionPointer+=3;
                i+=3;
                break;
        }
    }
}
