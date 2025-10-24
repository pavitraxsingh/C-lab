 //5.  WAP using ternary operator, the user should input the length and breadth of three rectangles, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.

 #include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3, p1, p2, p3;
    printf("Enter length & breadth of rectangle 1: ");
    scanf("%d %d", &l1, &b1);
    printf("Enter length & breadth of rectangle 2: ");
    scanf("%d %d", &l2, &b2);
    printf("Enter length & breadth of rectangle 3: ");
    scanf("%d %d", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    (p1 > p2 && p1 > p3) ? printf("Rectangle 1 has highest perimeter") :
    (p2 > p3) ? printf("Rectangle 2 has highest perimeter") :
                printf("Rectangle 3 has highest perimeter");
    return 0;
}

