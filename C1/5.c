#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers (press enter after each input)\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest", a);
        }
        else
        {
            printf("%d is the largest", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is the largest", b);
        }
        else
        {
            printf("%d is the largest", c);
        }
    }
    return 0;
}