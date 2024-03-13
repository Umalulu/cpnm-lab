#include <stdio.h>

void main(){
	float c;
	printf("Enter the temperature in Fahrenheit scale-");
	scanf("%f",&c);
	printf("\n%0.2fF is equivalent to %0.2fC",c,(c-32)*5/9);
}
