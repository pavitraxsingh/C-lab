// 2. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI=weight(kgs)/(Height(Mts)*Height(Mts)).

#include <stdio.h>

int main() {
    float w, h, bmi;
    printf("Enter weight (kg): ");
    scanf("%f", &w);
    printf("Enter height (m): ");
    scanf("%f", &h);

    bmi = w / (h * h);
    printf("BMI = %.2f\n", bmi);

    if (bmi < 15)
        printf("Starvation");
    else if (bmi <= 17.5)
        printf("Anorexic");
    else if (bmi <= 18.5)
        printf("Underweight");
    else if (bmi <= 24.9)
        printf("Ideal");
    else if (bmi <= 29.9)
        printf("Overweight");
    else if (bmi <= 39.9)
        printf("Obese");
    else
        printf("Morbidity Obese");
    return 0;
}
