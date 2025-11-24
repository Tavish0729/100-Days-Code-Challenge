#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main() {
    enum Color c;
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (c = RED; c <= GREEN; c++) {
        printf("%s=%d\n", names[c], c);
    }

    return 0;
}
