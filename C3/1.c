#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of pattern-");
    scanf("%d", &n);
    printf("\n");
    // Pattern 1
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
    // Pattern 2
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < i + 1; j++)
        {
            printf("%d", j);
        }
        for (int j = i; j > 0 + 1; j--)
        {
            printf("%d", j - 1);
        }
        printf("\n");
    }
    printf("\n");
    // Pattern 3
    for (int i = n; i > 1; i--)
    {
        for (int j = i; j > n - i - 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
    // Pattern 4
    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (i + j == n + 1 || i - j == n - 1 || j - i == n - 1 || i + j == 3 * n - 1)
            {
                printf("+");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}