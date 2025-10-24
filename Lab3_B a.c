//1.WAP to enter numbers till the user wants. At the end, it should display the count of//positive, negative, and Zeroes entered.


#include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, zero = 0;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    }

    printf("\nPositive: %d\nNegative: %d\nZero: %d", pos, neg, zero);
    return 0;
}


