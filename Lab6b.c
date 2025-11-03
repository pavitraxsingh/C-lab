//2. Develop a recursive function GCD (num1, num2) that accepts two integer arguments.
// Write a C program that invokes this function to find the greatest common divisor of two given integers.

#include <stdio.h>

// Recursive function for GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d = %d", num1, num2, gcd(num1, num2));
    return 0;
}
