//2.Perform pointer arithmetic (increment and decrement) on pointers of different data types.
// Observe how the memory addresses change and the effects on data access

#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Original address = %p\n", p);

    p++;   // increment
    printf("After p++ = %p\n", p);

    p--;   // decrement
    printf("After p-- = %p\n", p);

    float y = 3.14;
    float *q = &y;

    printf("Original float pointer = %p\n", q);
    q++;
    printf("After q++ = %p\n", q);

    return 0;
}
