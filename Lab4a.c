//1.Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>
int globalVar = 10;

void showGlobal1() {
    printf("Inside showGlobal1(): globalVar = %d\n", globalVar);
}

void showGlobal2() {
    printf("Inside showGlobal2(): globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);
    showGlobal1();
    showGlobal2();
    return 0;
}
