// Exercise 1-12. Write a program that prints its input one word per line.
#include <stdio.h>
#include <stdlib.h>

#define OUT 0
#define IN 1

int main(void) {
    int ch, state = OUT;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            if (state == OUT) {
                state = IN;
                putchar('\n');
            }
        } else {
            state = OUT;
            putchar(ch);
        }
    }

    return EXIT_SUCCESS;
}