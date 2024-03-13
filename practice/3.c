#include<stdio.h>

int main() {
    int n;
    float sum = 2.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = 2 + 1.0 / sum;
    }

    printf("\n%f", sum);

    return 0;
}


