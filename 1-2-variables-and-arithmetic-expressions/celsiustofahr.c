#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("%s\n", "-----------------------");
    printf("|%s|%s|\n", "  Celsius  ", "   Fahr  ");
    printf("%s\n", "-----------------------");

    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("|    %3.0f    |  %5.1f  |\n", celsius, fahr);
        printf("%s\n", "-----------------------");
        celsius += step;
    }

    return EXIT_SUCCESS;
}