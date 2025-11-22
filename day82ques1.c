#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light signal;
    scanf("%d", &signal);

    if (signal == RED) printf("Stop");
    else if (signal == YELLOW) printf("Wait");
    else if (signal == GREEN) printf("Go");
    else printf("Invalid");

    return 0;
}
