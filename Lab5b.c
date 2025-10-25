//WAP to read a list of integers and store it in a single dimensional array. 
//Write a C program to count and display positive, negative, odd, and even numbers in an array.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive = 0, negative = 0, even = 0, odd = 0;

    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nPositive numbers: %d", positive);
    printf("\nNegative numbers: %d", negative);
    printf("\nEven numbers: %d", even);
    printf("\nOdd numbers: %d\n", odd);

    return 0;
}
