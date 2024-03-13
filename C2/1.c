#include<stdio.h>
int main()
{
    float r,l,b;
    float pi=3.1415;
    printf("Enter the radius of the circle (in m)-");
    scanf("%f",&r);
    printf("Enter the dimensions of the rectangle (in m)\nLength-");
    scanf("%f",&l);
    printf("Breadth-");
    scanf("%f",&b);
    printf("Area and circumference of circle are %0.2f sq.m and %0.2f m respectively\n",pi*r*r,2*pi*r);
    printf("Area and perimeter of circle are %0.2f sq.m and %0.2f m respectively",l*b,2*(l+b));
    return 0;
}