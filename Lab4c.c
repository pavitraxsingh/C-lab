//3.Declare variables within different code blocks (enclosed by curly braces) and
// test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {
    printf("Program to demonstrate block scope\n\n");

    int x = 10;  
    printf("Outside any inner block: x = %d\n", x);

    {   
        int y = 20;  
        printf("Inside first block: x = %d, y = %d\n", x, y);
    }

    {   
        int z = 30;
        printf("Inside second block: x = %d, z = %d\n", x, z);
    }

    printf("\nOutside all blocks: only x = %d is accessible\n", x);

    return 0;
}
