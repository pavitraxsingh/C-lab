//Ramanujan Number is the smallest number that can be expressed as the sum of twocubes in two different ways.
// WAP to print all such numbers up to a reasonable limit.
//Example of Ramanujan number: 1729
//12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)

#include <stdio.h>

int main() {
    int a, b, c, d, L;
    printf("Enter limit: ");
    scanf("%d", &L);

    for (a = 1; a <= L; a++)
        for (b = a; b <= L; b++)
            for (c = a + 1; c <= L; c++)
                for (d = c; d <= L; d++)
                    if (a*a*a + b*b*b == c*c*c + d*d*d)
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               a*a*a + b*b*b, a, b, c, d);

    return 0;
}
