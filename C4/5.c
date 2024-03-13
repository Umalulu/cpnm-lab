#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of rows-");
    scanf("%d", &m);
    printf("Enter the number of columns-");
    scanf("%d", &n);
    int m1[m][n];
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\nYour Matrix-\n");
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix's Transpose-\n");
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("%d\t", m1[j][i]);
        }
        printf("\n");
    }

    return 0;
}