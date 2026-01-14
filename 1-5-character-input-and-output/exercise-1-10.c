// Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.

#include <stdio.h>
#include <stdlib.h>

#define BACKSLASH putchar('\\')

int main(void) {
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch == '\t') {
            BACKSLASH;
            putchar('t');
        } else if (ch == '\b') {
            BACKSLASH;
            putchar('b');
        } else if (ch == '\\') {
            BACKSLASH;
            putchar('\\');
        } else {
            putchar(ch);
        }
    }

    return EXIT_SUCCESS;
}