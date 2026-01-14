#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c;

    // c = getchar();
    // while (c != EOF) {
    //     putchar(c);
    //     c = getchar();
    // }

    while ((c = getchar()) != EOF)
        putchar(c);

    // for (int c = getchar(); c != EOF; c = getchar())
    //     putchar(c);

    return EXIT_SUCCESS;
}