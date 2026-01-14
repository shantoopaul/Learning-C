#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n') nl++;

    printf("%d\n", nl);
    return EXIT_SUCCESS;
}