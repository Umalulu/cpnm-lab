#include<stdio.h>
int main()
{int n;
    printf("Enter the number of terms-");
    scanf("%d",&n);
    float x[n], y[n];
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter x[%d]:",i);
        scanf("%f",&x[i]);
        printf("Enter y[%d]:",i);
        scanf("%f",&y[i]);
    }
    float u; 
    printf("Enter the value for which y is unknown-");
    scanf("%f",&u);

    float sum=0;
    for (size_t i = 0; i < n ; i++)
    {
        float product=1;
        for (size_t j = 0; j < n; j++)
        {
            if (j!=i)
            {
                product*=(u-x[j])/(x[i]-x[j]);
            }
            
        }
        sum+=product*y[i];
    }
    printf("The value of y at x=%0.2f is %0.5f",u,sum);
    
    return 0;
}