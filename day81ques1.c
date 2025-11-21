#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum Days d;
    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d\n", d);
    }
    return 0;
}
