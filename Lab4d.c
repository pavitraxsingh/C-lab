// 4. Declare a static local variable inside a function.
// Observe how its value persists across function calls.

#include <stdio.h>

void demoStatic() {
    static int num = 0;   
    num++;                
    printf("Function called %d time(s)\n", num);
}

int main() {
    printf("Program to demonstrate static local variable\n\n");

    demoStatic();   // 1st call
    demoStatic();   // 2nd call
    demoStatic();   // 3rd call

    return 0;
}
