#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
#define ROWLINE puts("----------------------")
#define HEADER puts("|  Fahr  |  Celsius  |")

// print Fahrenheit to Celsius table
int main(void) {
    // Table Header
    ROWLINE;
    HEADER;
    ROWLINE;

    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("|  %4d  |  %7.1f  |\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
        ROWLINE;
    }

    return EXIT_SUCCESS;
}