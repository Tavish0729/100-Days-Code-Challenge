#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // remaining seconds converted to minutes
    seconds = totalSeconds % 60;          // leftover seconds

    // Display result
    printf("Time is %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
