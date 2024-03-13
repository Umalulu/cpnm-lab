#include <stdio.h>
#include <math.h>

double f(double x)
{
    return 3 * x - cos(x) - 1;
}

double df(double x)
{
    return 3 + sin(x);
}

double bisection(double a, double b, double tol, int maxIter)
{
    int iter = 1;
    double c;

    while (iter <= maxIter)
    {
        c = (a + b) / 2;

        if (fabs(f(c)) < tol)
        {
            return c;
        }

        if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }

        iter++;
    }

    return c;
}

double regulaFalsi(double a, double b, double tol, int maxIter)
{
    int iter = 1;
    double c;

    while (iter <= maxIter)
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if (fabs(f(c)) < tol)
        {
            return c;
        }

        if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }

        iter++;
    }

    return c;
}

double newtonRaphson(double x0, double tol, int maxIter)
{
    int iter = 1;
    double x = x0;

    while (iter <= maxIter)
    {
        x = x - (f(x) / df(x));

        if (fabs(f(x)) < tol)
        {
            return x;
        }

        iter++;
    }

    return x;
}

int main()
{
    double x0, tol;
    int maxIter, choice;

    printf("Enter initial guess: ");
    scanf("%lf", &x0);

    printf("Enter max tolerable error: ");
    scanf("%lf", &tol);

    printf("Enter max number of iterations: ");
    scanf("%d", &maxIter);

    printf("\nChoose a method to find the root:\n");
    printf("1. Bisection Method\n");
    printf("2. Regula Falsi Method\n");
    printf("3. Newton Raphson Method\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nRoot using Bisection Method: %lf\n", bisection(-10, 10, tol, maxIter));
        break;
    case 2:
        printf("\nRoot using Regula Falsi Method: %lf\n", regulaFalsi(-10, 10, tol, maxIter));
        break;
    case 3:
        printf("\nRoot using Newton Raphson Method: %lf\n", newtonRaphson(x0, tol, maxIter));
        break;
    default:
        printf("\nInvalid choice\n");
    }

    return 0;
}
