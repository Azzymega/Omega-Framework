#include <iostream>
#include "cpu.h"
#include "microcode.h"

int main() {
    cpu c = cpu();
    firmware code = firmware();
    char x[] = {5,1,2,0};
    code.interpret(&x,4,c);
    return 0;
}
