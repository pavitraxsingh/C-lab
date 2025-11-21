// 1. Write a C program that uses functions to perform the following operations:
// a. Reading a complex number. 
// b. Writing a complex number.
// c. Addition and subtraction of two complex numbers.

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};
/* (a) READ COMPLEX NUMBER */
struct Complex read() {
    struct Complex c;
    scanf("%f %f", &c.real, &c.imag);
    return c;
}
/* (b) WRITE COMPLEX NUMBER */
void print(struct Complex c) {
    printf("%.1f + %.1fi\n", c.real, c.imag);
}
/* (C1) ADD COMPLEX NUMBERS */
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}
/* (C2) SUBTRACT COMPLEX NUMBERS */
struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}

int main() {
    struct Complex c1, c2, sum, diff;

    c1 = read();
    c2 = read();

    sum = add(c1, c2);
    diff = sub(c1, c2);

    print(sum);
    print(diff);

    return 0;
}
