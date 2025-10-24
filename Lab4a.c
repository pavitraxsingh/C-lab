//1.Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

int x = 10;   // Global variable

void show() {
    printf("Inside show(), x = %d\n", x);
}

int main() {
    printf("Inside main(), x = %d\n", x);
    show();
    x = 20;
    printf("After changing in main(), x = %d\n", x);
    show();
    return 0;
}
