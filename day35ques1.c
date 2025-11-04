#include <stdio.h>

int main() {
    int n, i, largest, second;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (n < 2) {
        printf("At least two elements are required.\n");
        return 0;
    }
    
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }
    
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    
    printf("The second largest element is: %d\n", second);
    return 0;
}
