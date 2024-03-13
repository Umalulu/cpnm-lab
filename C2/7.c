#include<stdio.h>
int main()
{
    int h,m,s;
    printf("Enter time in seconds-");
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("It equals to %d hours, %d minutes, %d seconds.",h,m,s);
    return 0;
}