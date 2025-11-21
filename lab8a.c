//1.Declare different types of pointers (int, float, char, double) and initialize them with the addresses of variables. 
//Print the values of both the pointers and the variables they point to.

#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 20.123;

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;
    double *p4 = &d;

    printf("Value of a = %d, Pointer p1 = %p\n", a, p1);
    printf("Value of b = %.2f, Pointer p2 = %p\n", b, p2);
    printf("Value of c = %c, Pointer p3 = %p\n", c, p3);
    printf("Value of d = %.3lf, Pointer p4 = %p\n", d, p4);

    return 0;
}
