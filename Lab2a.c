//1. WAP a C program to calculate the area and perimeter of a rectangle based on its length and width. User should provide input for length and breadth. 
//(a) all variables should be declared integer type. 

#include <stdio.h>

int main() {
    int length, width, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area = %d\n", area);
    printf("Perimeter = %d", perimeter);

    return 0;
}


