#include <stdio.h>
#include <stdlib.h>

#define YES 1
#define NO 0
#define ROWLINE puts("---------------------------------------------")

int main(void) {
    int c, nc, nw, nl, is_a_word;

    nc = nw = nl = 0;
    is_a_word = NO;

    while ((c = getchar()) != EOF) {
        nc++;

        if (c == '\n') nl++;

        if (c == ' ' || c == '\t' || c == '\n') {
            is_a_word = NO;
        } else if (is_a_word == NO) {
            is_a_word = YES;
            nw++;
        }
    }

    ROWLINE;
    printf("| Characters: %d | Words: %d | Newlines: %d |\n", nc, nw, nl);
    ROWLINE;
    return EXIT_SUCCESS;
}