#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number-");
    scanf("%d", &n);
    printf("First %d numbers of the fibonacci sequence are-\n0,1,",n);
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 2; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("%d,", c);
    }

    return 0;
}