// The population of a town is 100000.
// The population has increased steadily at the rateof 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.

#include <stdio.h>

int main() {
    float pop = 100000;
    int i;

    for (i = 1; i <= 10; i++) {
        pop = pop + (pop * 0.10);
        printf("Year %d: %.0f\n", i, pop);
    }
    return 0;
}


