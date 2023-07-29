#include <iostream>
#include "cpu.h"
#include "microcode.h"
#include "vmldr/ldr.h"

int main() {
    cpu c = cpu();
    firmware code = firmware();
    char x[] = {0,0,0,0};
    char* d = reinterpret_cast<char *>(&x);
    load("t.txt",d);
    code.interpret(&x,4,c);
    return 0;
}
