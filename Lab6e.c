//5. Develop a function REVERSE (str) that accepts a string argument. 
//Write a C program that invokes this function to find the reverse of a given string.

#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverse(char str[]) {
    int i = 0, j, len;
    char temp;
    len = strlen(str);
    
    // Remove newline if present
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    len = strlen(str);
    j = len - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverse(str);
    printf("Reversed string: %s", str);
    return 0;
}

