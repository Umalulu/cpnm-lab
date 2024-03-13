#include <stdio.h>


void main(){
	float bs;
	printf("Please enter your Basic Salary\n");
	scanf("%f",&bs);
	printf("\n Dearness allowance = %.2f \n Home rent allowance = %.2f",0.6*bs,0.15*bs);
	printf("\n\n GROSS SALARY [Basic Salary + Dearness Allowance + Home Rent Allowance]\n %.2f",bs+0.6*bs+0.15*bs);
}
