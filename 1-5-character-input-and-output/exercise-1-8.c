// Exercise 1-8. Write a program to count blanks, tabs, and newlines.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ch, blanks, tabs, newlines;

    blanks = tabs = newlines = 0;

    while ((ch = getchar()) != EOF)
        if (ch == ' ')
            blanks++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            newlines++;

    printf("blanks: %d tabs: %d newlines: %d\n", blanks, tabs, newlines);
    return EXIT_SUCCESS;
}