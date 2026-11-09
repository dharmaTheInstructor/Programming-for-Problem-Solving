#include <stdio.h>


int main() {
    int matrix[10][10], rows, cols, i, j, sum;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter %dx%d matrix:\n",rows,cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
     printf("Given Array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n--- Sum of Rows ---\n");
    for (i = 0; i < rows; i++) {
        sum = 0;
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, sum);
    }
    printf("\n--- Sum of Columns ---\n");
    for (j = 0; j < cols; j++) {
        sum = 0;
        for (i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

    return 0;
}
