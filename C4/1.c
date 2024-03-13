#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the size of the array-");
    scanf("%d", &n);
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Given array is-\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (size_t i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("\nReversed array is-\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}