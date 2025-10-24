//Write a program that prompts the user to enter their name and age. Use char array of size 100 and use %s for input and output.

#include <stdio.h>

int main(){
    char name[100];
    int age;
    
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%s", &age);

    printf("Name: %s\nAge: %d", name, age);
    return 0;
}