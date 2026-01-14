// Exercise 1-6. Verify that the expression getchar ( ) I= EOF is 0 or 1.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("%d", getchar() != EOF);

    return EXIT_SUCCESS;
}