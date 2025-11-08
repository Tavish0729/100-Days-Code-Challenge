#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    int i = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *wordStart = str;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            reverseWord(wordStart, &str[i - 1]);
            wordStart = &str[i + 1];
        }
        i++;
    }
    reverseWord(wordStart, &str[i - 1]);

    printf("Reversed sentence: %s\n", str);
    return 0;
}
