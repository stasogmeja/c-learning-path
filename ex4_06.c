#include <stdio.h>

int
main(int argc, char **argv) {
    int c;
    int lines = 0;
    int chars = 0;

    printf("Enter text:\n");

    while ((c = getchar()) != EOF) {
        chars++;

        if (c == '\n') {
            lines++;
        }
    }

    printf("Lines:%7d\n", lines);
    printf("Chars:%7d\n", chars);

    return 0;
}