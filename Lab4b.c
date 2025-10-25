//2.Declare a local variable inside a function and try to access it outside the function. 
//Compare this with accessing the global variable from within the function.

#include <stdio.h>
int globalVar = 100;

void showVariables() {
    int localVar = 20;   
    printf("Inside showVariables(): localVar = %d\n", localVar);
    printf("Inside showVariables(): globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);

    showVariables();
    printf("In main(): localVar is NOT accessible here.\n");

    return 0;
}
