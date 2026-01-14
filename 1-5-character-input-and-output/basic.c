#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Enter a character: ");
    char c = getchar();

    putchar(c);

    // Also right
    // putchar(getchar());

    return EXIT_SUCCESS;
}