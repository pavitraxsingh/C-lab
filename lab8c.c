//3.Write a function that accepts pointers as parameters.
// Pass variables by reference using pointers and modify their values within the function.

#include <stdio.h>

void change(int *n1, int *n2) {
    *n1 = *n1 + 5;   // changing value
    *n2 = *n2 * 2;
}

int main() {
    int a = 10, b = 3;

    change(&a, &b);

    printf("a = %d\n", a);   // 15
    printf("b = %d\n", b);   // 6

    return 0;
}
