//
// Created by Danil on 28.07.2023.
//

#include <iostream>
#include "microcode.h"
#include "../OmegaSoftwareALComponent/Utility/AbstractData.h"
#include "../OmegaSoftwareALComponent/Manager/SystemCallManager.h"

void firmware::interpret(void * image, int imageSize, cpu centralPU) {
    auto* Data = new AbstractData();
    SystemCallManager Manager = SystemCallManager();
    memcpy(&centralPU.memory[0],image,imageSize);
    int instructionNumber = 0;
    centralPU.instructionPointer = &centralPU.memory[instructionNumber];
    for (int i = 0; i <= imageSize; ++i) {
        centralPU.instructionPointer = &centralPU.memory[instructionNumber];
        switch (*centralPU.instructionPointer) {
            case microcode::hlt :
                std::cout << "halt";
                i+=1;
                break;
            case microcode::jmp :
                centralPU.instructionPointer = reinterpret_cast<char *>(*(centralPU.instructionPointer + 1));
                instructionNumber+=2;
                i+=1;
                break;
            case microcode::add :
                centralPU.registers[centralPU.memory[instructionNumber+1]-1] += centralPU.registers[centralPU.memory[instructionNumber+2]-1];
                instructionNumber+=3;
                i+=2;
                break;
            case microcode::mov :
                centralPU.registers[centralPU.memory[instructionNumber+1]-1] = centralPU.registers[centralPU.memory[instructionNumber+2]];
                instructionNumber+=3;
                i+=2;
                break;
            case microcode::cmv :
                centralPU.registers[centralPU.memory[instructionNumber+1]-1] = centralPU.memory[instructionNumber+2];
                instructionNumber+=3;
                i+=2;
                break;
            case microcode::sub :
                centralPU.registers[centralPU.memory[instructionNumber+1]] -= centralPU.registers[centralPU.memory[instructionNumber+2]];
                instructionNumber+=3;
                i+=2;
                break;
            case microcode::scl :
                switch (centralPU.memory[instructionNumber+1]) {
                    case SoftwareAbstractions::Get :
                        Manager.AddSystemCall(SoftwareAbstractions::Get,*Data);
                    case SoftwareAbstractions::Print :
                        Data->Data.push_back(centralPU.memory[instructionNumber+2]);
                        Manager.AddSystemCall(SoftwareAbstractions::Print, *Data);
                }
                Manager.ExecuteAllCalls(Data);
                instructionNumber+=3;
                i+=2;
                break;
        }
    }
}
