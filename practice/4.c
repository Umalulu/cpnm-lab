#include<stdio.h>
int main()
{int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int bin=0;
    while (n>0)
    {
       bin*=10+ n%2;
       n/=2 ;
    }
    printf("\n%d",bin);
    
    return 0;
}