#include <stdio.h>

int main() {
    int n, i, j, k, distinct = 1;
    int matrix[10][10];
    
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (i = 0; i < n; i++) {
        for (k = i + 1; k < n; k++) {
            if (matrix[i][i] == matrix[k][k]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }
    
    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
    
    return 0;
}
