#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10];
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Diagonal traversal of the matrix:\n");
    for (int d = 0; d < rows + cols - 1; d++) {
        for (i = 0; i <= d; i++) {
            j = d - i;
            if (i < rows && j < cols)
                printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
    
    return 0;
}
