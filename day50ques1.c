#include <stdio.h>
#include <string.h>

int main() {
    char date[20], month[3];
    int d, m, y;
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);
    sscanf(date, "%d/%d/%d", &d, &m, &y);

    if (m >= 1 && m <= 12)
        printf("Formatted date: %02d-%s-%04d\n", d, months[m - 1], y);
    else
        printf("Invalid month.\n");

    return 0;
}
