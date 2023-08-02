//
// Created by Danil on 02.08.2023.
//

#ifndef LEGACYRUNTIME_MAIN_H
#define LEGACYRUNTIME_MAIN_H


#include <iostream>
#include "../OmegaBCF/Core/ByteCodeMachine.h"

int main(){
    std::cout << "Hello World" << std::endl;
    ByteCodeMachine bm = ByteCodeMachine("f.txt");
    bm.LoadCode();
    bm.StartMetadataLexing();
    bm.StartInstructionLexing(); // Упаковать токены в векторы у обоих типов и всё будет хорошо.
    system("pause");
    return 0;
}


#endif //LEGACYRUNTIME_MAIN_H
