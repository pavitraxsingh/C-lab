//1. Develop a recursive and non-recursive function FACT (num) to find the factorial of a number, n!, defined by FACT No = 1, if n = 0. Otherwise, FACTNo = n * FACT(n-1).
// Using this function, write a C program to compute the binomial coefficient.
// Tabulate the results for different values of n and r with suitable messages.

#include <stdio.h>

// Recursive factorial
int fact_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

// Non-recursive factorial
int fact_nonrecursive(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, r, result;
    
    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);

    if (r > n) {
        printf("Invalid input! r should be <= n.");
        return 0;
    }

    result = fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));
    
    printf("\nUsing Recursive Function:\n");
    printf("nCr = %d\n", result);
    
    result = fact_nonrecursive(n) / (fact_nonrecursive(r) * fact_nonrecursive(n - r));
    printf("\nUsing Non-Recursive Function:\n");
    printf("nCr = %d\n", result);
    
    return 0;
}



