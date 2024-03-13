#include <stdio.h>
void numfunc(int *arr, int n)
{
    int sum=0;
    printf("Your numbers are-\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
        sum+=arr[i];
    }
    printf("\nTheir sum is %d",sum);
}
int main()
{
    int n;
    printf("Enter the number count-");
    scanf("%d", &n);
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        printf("Number %d- ", i + 1);
        scanf("%d",&arr[i]);
    }
    numfunc(arr, n);

    return 0;
}