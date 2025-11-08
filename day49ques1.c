#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c.", toupper(name[i]));
    }

    printf("\n");
    return 0;
}
