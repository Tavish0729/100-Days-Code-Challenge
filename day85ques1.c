#include <stdio.h>

enum Numbers { A = 10, B, C, D, E };

int main() {
    enum Numbers n;

    for (n = A; n <= E; n++)
        printf("%d ", n);

    return 0;
}
