#include <stdio.h>
#include <math.h>
float f1(float x)
{
    return (1 / (1 + pow(x, 2)));
}
float f2(float x)
{
    return (2 * pow(x, 2) + 3 * x);
}
float integrate_trapezoidal(float l, float u, int s)
{
    float sum = 0;
    float h = (u - l) / s;
    for (size_t i = 0; i < s; i++)
    {
        sum += (h / 2) * (f1(l + i * h) + f1(l + (i + 1) * h));
    }
    return sum;
}
float integrate_simpson(float l, float u, int s)
{
    float sum = 0;
    float h = (u - l) / s;
    for (size_t i = 0; i < s; i += 2)
    {
        sum += (h / 3) * (f2(l + i * h) + 4 * f2(l + (i + 1) * h) + f2(l + (i + 2) * h));
    }
    return sum;
}

int main()
{
    int s;
    float l, u;
    printf("Integration by trapezoidal rule-\n");
    printf("Enter lower limit-");
    scanf("%f", &l);
    printf("Enter upper limit-");
    scanf("%f", &u);
    printf("Enter no. of subintervals-");
    scanf("%d", &s);
    printf("\nRequired value of integration is %0.3f\n\n\n", integrate_trapezoidal(l, u, s));
    printf("Integration by Simpson's 1/3rd rule-\n");
    printf("Enter lower limit-");
    scanf("%f", &l);
    printf("Enter upper limit-");
    scanf("%f", &u);
    printf("Enter no. of subintervals(even)-");
    scanf("%d", &s);
    printf("\nRequired value of integration is %0.3f", integrate_simpson(l, u, s));

    return 0;
}