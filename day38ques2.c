#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;
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
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }
    
    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
    
    return 0;
}
