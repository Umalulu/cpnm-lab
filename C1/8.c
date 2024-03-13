#include <stdio.h>
int main()
{
    int num;
    int flag = 1;
    printf("Enter a number-");
    scanf("%d", &num);
    if (num < 2)
    {
        flag = 0;
    }
    else
    {
        for (int j = 2; j < (num / 2) + 1; j++)
        {
            if (num % j == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    return 0;
}