#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    while (1)
    {
        printf("\nEnter a number: ");
        scanf("%d", &n);
        if (n < -1)
        {
            printf("Enter a positive integer!");
        }
        else if (n == -1)
        {
            break;
        }

        else
        {
            printf("Factorial of %d is %d", n, fact(n));
        }
    }

  

    return 0;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
