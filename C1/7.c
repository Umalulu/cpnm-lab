#include<stdio.h>
int main()
{
    int n;
    int rev=0;
    printf("Enter a number-");
    scanf("%d",&n);
    while (n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("Reverse of the number is %d",rev);
    return 0;
}