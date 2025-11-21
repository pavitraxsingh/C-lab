 //4.Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. 
//Write a C program to display your present address.

#include <stdio.h>

union Address {
    char name[50];
    char home[50];
    char hostel[50];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address a;

    printf("Enter present address: ");
    gets(a.city);       // store your present address in any one field

    printf("Present Address: %s\n", a.city);

    return 0;
}
