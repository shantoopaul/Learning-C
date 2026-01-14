// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include <stdio.h>
#include <stdlib.h>

#define NOTBLANK 0
#define ISBLANK 1

int main(void) {
    int ch, previous_ch = NOTBLANK;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            if (previous_ch == NOTBLANK) {
                putchar(ch);
                previous_ch = ISBLANK;
            }
        } else {
            putchar(ch);
            previous_ch = NOTBLANK;
        }
    }

    return EXIT_SUCCESS;
}