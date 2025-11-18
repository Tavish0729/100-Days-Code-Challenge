#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    int i = 0;
    while (s[i] == ' ') i++;

    if (s[i] != '\0') s[i] = toupper(s[i]);
    i++;

    for (; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }

    printf("%s", s);
    return 0;
}
