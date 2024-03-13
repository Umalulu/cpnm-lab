#include <stdio.h>
int main()
{
    int ctr = 0, n = 2;
    while (ctr < 100)
    {
        int flag = 1;
        for (int j = 2; j < (n / 2) + 1; j++)
        {
            if (n % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d,", n);
            ctr++;
        }
        n++;
    }
    return 0;
}