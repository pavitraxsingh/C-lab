//4. According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include <stdio.h>

int main() {
    int y, i, d = 1;
    printf("Enter year: ");
    scanf("%d", &y);

    for (i = 1; i < y; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            d += 2;
        else
            d += 1;
    }
    d = d % 7;

    printf("On 1 Jan %d, it was ", y);
    if (d == 1) printf("Monday");
    else if (d == 2) printf("Tuesday");
    else if (d == 3) printf("Wednesday");
    else if (d == 4) printf("Thursday");
    else if (d == 5) printf("Friday");
    else if (d == 6) printf("Saturday");
    else printf("Sunday");

    return 0;
}
