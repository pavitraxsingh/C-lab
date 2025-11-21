// 2.Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay.
//  The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA).
// Print the employees name and gross salary.
#include <stdio.h>

struct Employee
{
    char name[50];
    float basic;
    float gross;
};

int main()
{
    struct Employee e[100];

    for (int i = 0; i < 100; i++)
    {
        scanf(" %s %f ", e[i].name, &e[i].basic);

        float da = 0.52 * e[i].basic;
        e[i].gross = e[i].basic + da;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%s %.2f\n", e[i].name, e[i].gross);
    }

    return 0;
}
