#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
