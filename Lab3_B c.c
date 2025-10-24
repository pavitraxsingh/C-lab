//3. WAP to generate the following set of output.

1
2 3
4 5 6
//
#include <stdio.h>

int main() {
    int i, j, k = 1;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}

