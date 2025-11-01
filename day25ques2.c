#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 0; i < 5; i++) {
        for (space = 0; space < i; space++) {
            printf(" ");
        }
        for (j = 5; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
