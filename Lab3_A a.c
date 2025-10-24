//1. WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("Triangle is valid\n");
        if (a == b && b == c)
            printf("Equilateral Triangle");
        else if (a == b || b == c || c == a)
            printf("Isosceles Triangle");
        else if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
            printf("Right Angled Triangle");
        else
            printf("Scalene Triangle");
    } else {
        printf("Triangle is not valid");
    }
    return 0;
}
