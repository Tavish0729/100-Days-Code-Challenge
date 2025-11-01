#include <stdio.h>

int main() {
    int i, j, space, start;

    for (i = 5; i >= 1; i--) {
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        start = i;
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
