#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("swapped values of a and b are \na=%d \nb=%d", a, b);

    return 0;
}