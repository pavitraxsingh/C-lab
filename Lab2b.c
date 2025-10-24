//2. WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.
//(a) all variables should be declared integer type.

#include <stdio.h>

int main() {
    int celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %d", fahrenheit);

    return 0;
}
