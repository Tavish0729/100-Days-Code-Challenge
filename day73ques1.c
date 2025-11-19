#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (!isspace(ch)) {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
