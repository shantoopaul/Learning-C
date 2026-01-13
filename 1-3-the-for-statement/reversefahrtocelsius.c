#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Table Header
    printf("%s\n", "----------------------");
    printf("|%s|%s|\n", "  Fahr  ", "  Celsius  ");
    printf("%s\n", "----------------------");

    for (int fahr = 300; fahr >= 0; fahr -= 20) {
        printf("|  %4d  |  %7.1f  |\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
        printf("%s\n", "----------------------");
    }
    return EXIT_SUCCESS;
}