#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    int matrix[10][10];
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    
    printf("Sum of all elements = %d\n", sum);
    
    return 0;
}
