#include <stdio.h>
int main()
{
    int i = 0;
    printf("ASCII TABLE--\nINTEGER  CHARACTER \n");
    while (i < 256)
    {
        printf("%d\t\t%c\n", i, (char)i);
        i++;
    }

    return 0;
}