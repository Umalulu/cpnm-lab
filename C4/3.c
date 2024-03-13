#include <stdio.h>
int main()
{
    int m1[3][3], m2[3][3], choice;
    printf("\nMATRIX 1\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\nMATRIX 2\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\nMATRIX 1\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIX 2\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }
    while (choice != 4)
    {
        printf("\n--MATRIX OPERATIONS--\n 1.ADD\n 2.SUBTRACT\n 3.MULTIPLY\n 4.EXIT\nEnter your choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nMATRIX 1+ MATRIX 2\n");
            for (size_t i = 0; i < 3; i++)
            {
                for (size_t j = 0; j < 3; j++)
                {
                    printf("%d\t", m1[i][j] + m2[i][j]);
                }
                printf("\n");
            }

            break;
        case 2:
            printf("\nMATRIX 1 - MATRIX 2\n");
            for (size_t i = 0; i < 3; i++)
            {
                for (size_t j = 0; j < 3; j++)
                {
                    printf("%d\t", m1[i][j] - m2[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("\nMATRIX 1 x MATRIX 2\n");
            for (size_t i = 0; i < 3; i++)
            {
                for (size_t j = 0; j < 3; j++)
                {
                    int r = 0;
                    for (size_t k = 0; k < 3; k++)
                    {
                        r += m1[i][k] * m2[k][j];
                    }
                    printf("%d\t", r);
                }
                printf("\n");
            }
        case 4:
            break;

        default:
            printf("Make a valid choice--");
            break;
        }
    }

    return 0;
}