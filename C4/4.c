#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number count-");
    scanf("%d", &n);
    float arr[n], mean, S;
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter number [%d]: ", i + 1);
        scanf("%f", &arr[i]);
        mean += arr[i];
    }
    mean /= n;
    printf("Data given is--\n");
    for (size_t i = 0; i < n; i++)
    {
        S += pow(arr[i] - mean, 2);
        printf("%0.2f ", arr[i]);
    }
    S = sqrt(S / (n - 1));
    printf("\n\nMean and Standard Deviation of the given data are %0.2f and %0.2f respectively", mean, S);

    return 0;
}