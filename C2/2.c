#include <stdio.h>
#include <math.h>

int main()
{
    int arm, len, temp, d;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &arm);

    if (arm < 0)
    {
        printf("Please enter a positive number.\n");
        return 0;
    }

    len = (int)log10(arm) + 1;
    temp = arm;

    for (int i = 0; i < len; i++)
    {
        d = temp % 10;
        sum += pow(d, len);
        temp = temp / 10;
    }

    if (sum == arm)
    {
        printf("%d is an Armstrong number.\n", arm);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", arm);
    }

    return 0;
}
