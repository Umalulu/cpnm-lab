#include <stdio.h>
#include <math.h>
int main()
{
    int l, u;
    printf("Enter lower limit-");
    scanf("%d", &l);
    printf("Enter upper limit-");
    scanf("%d", &u);
    printf("The list of armstrong numbers in given range are-\n");
    for (int i = l; i < u + 1; i++)
    {
        int len = (int)log10(i) + 1;
        int temp = i;
        int sum=0;
        for (int j = 0; j < len; j++)
        {
            int d = temp % 10;
            sum += pow(d, len);
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}