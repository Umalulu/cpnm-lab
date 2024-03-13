#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number without using '0': ");
    scanf("%d", &n);

    int flag = 0;
    int temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit == 0)
        {
            flag = 1;
            break;
        }
        temp /= 10;
    }

    if (flag == 1)
    {
        printf("Your Number has a zero in it!\n");
    }
    else
    {
        int reverse = 0;
        temp = n;
        while (temp > 0)
        {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }
        if (reverse != n)
        {
            printf("%d is not a palindrome!\n", n);
        }
        else
        {
            printf("%d is a palindrome!\n", n);
        }
    }

    return 0;
}
