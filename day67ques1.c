#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int a[m];
    for(int i = 0; i < m; i++) scanf("%d", &a[i]);

    scanf("%d", &n);
    int b[n];
    for(int i = 0; i < n; i++) scanf("%d", &b[i]);

    int i = 0, j = 0;
    while(i < m && j < n) {
        if(a[i] <= b[j]) {
            printf("%d ", a[i]);
            i++;
        } else {
            printf("%d ", b[j]);
            j++;
        }
    }

    while(i < m) {
        printf("%d ", a[i]);
        i++;
    }

    while(j < n) {
        printf("%d ", b[j]);
        j++;
    }

    return 0;
}
