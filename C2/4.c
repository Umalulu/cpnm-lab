#include<stdio.h>
int main()
{
    int sum,n;
    printf("Enter the amount to be withdrawn- Rs");
    scanf("%d",&sum);
    printf("Following denominations are required---\n");
    n=sum/100;
    sum=sum%100;
    printf("%d notes of Rs 100\n",n);
    n=sum/50;
    sum=sum%50;
    printf("%d notes of Rs 50\n",n);
    n=sum/10;
    printf("%d notes of Rs 10\n",n);
    return 0;
}