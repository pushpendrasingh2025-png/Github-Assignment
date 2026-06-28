#include <stdio.h>

int main()
{
    int n, i, j;
    int matrix[100][100];

    printf("Enter size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                printf("The matrix is not symmetric.\n");
                return 0;
            }
        }
    }

    printf("The matrix is symmetric.\n");
    return 0;
}
