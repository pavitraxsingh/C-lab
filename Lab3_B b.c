//WAP to print the multiplication table of the number entered by the user. It should be inhe correct formatting. Num * 1 = Num

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}

