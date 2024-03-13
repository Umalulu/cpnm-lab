#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a positive number : ");
    scanf("%d", &n);
    printf("The prime factors of %d are:\n", n);
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            int flag = 0;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}