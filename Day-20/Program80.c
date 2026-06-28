#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int matrix[100][100];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Column-wise sums are:\n");
    for (j = 0; j < cols; j++)
    {
        int sum = 0;
        for (i = 0; i < rows; i++)
        {
            sum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, sum);
    }

    return 0;
}
