// Find if the given matrix of order (m x n) is a Sparse matrix or not. [Assume that a matrix can become a sparse matrix if more than half the total number of its elements have the value zero]

#include <stdio.h>

void checkSparse(int m, int n, int a[][n])
{
    int count = 0;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > (m * n) / 2)
    {
        printf("\nThe given matrix is a Sparse Matrix.\n");
    }
    else
    {
        printf("\nThe given matrix is not a Sparse Matrix.\n");
    }
}

void main()
{
    int m, n, i, j, a[100][100];
    printf("Enter the order of the matrix: ");
    scanf("%d %d", &m, &n);
    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    // Entered Matrix
    printf("\nEntered Matrix:\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == n - 1)
            {
                printf("\n");
            }
        }
    }

    checkSparse(m, n, a);
}
