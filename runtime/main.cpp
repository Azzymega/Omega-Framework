#include <iostream>
#include "cpu.h"
#include "microcode.h"
#include "../libldr/ldr.h"

int main() {
    cpu c = cpu();
    firmware code = firmware();
    char x[] = {0,0,0,0,0,0,0,0,0,0};
    char* d = reinterpret_cast<char *>(&x);
    load("assembly.ort",d);
    code.interpret(&x,10,c);
    std::cout << std::endl;
    system("pause"); // линукс не выдержит.
    return 0;
}
