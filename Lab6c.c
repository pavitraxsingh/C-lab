//3. Develop a recursive function FIBO (num) that accepts an integer argument. 
//Write a C program that invokes this function to generate the Fibonacci sequence up to num.

#include <stdio.h>

// Recursive function for Fibonacci
int fibo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int num, i;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");
    for (i = 0; i < num; i++)
        printf("%d ", fibo(i));

    return 0;
}
