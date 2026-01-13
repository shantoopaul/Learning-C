#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%s\n", "----------------------");
    printf("|%s|%s|\n", "  Fahr  ", "  Celsius  ");
    printf("%s\n", "----------------------");

    while (fahr <= upper) {
        // celsius = 5 * (fahr - 32) / 9;
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        // printf("%4d\t%7d\n", fahr, celsius);
        printf("|  %4.0f  |  %7.1f  |\n", fahr, celsius);
        printf("%s\n", "----------------------");
        fahr += step;
    }

    return EXIT_SUCCESS;
}
