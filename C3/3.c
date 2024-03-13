#include <stdio.h>
int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}
void printer(int n)
{
    if (n <= 0)
        return;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
}

int main()
{
    int n;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms: \n", n);
    printer(n);

    return 0;
}
