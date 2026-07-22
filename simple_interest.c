//to calculate simple Interest

#include<stdio.h>
#include<conio.h>
void main()
{
	float p,n,r,i;
	printf("\nEnter Principle Amount: ");
	scanf("%f",&p);
	printf("\nEnter No of years: ");
	scanf("%f",&n);
	printf("\nEnter Rate of Interest: ");
	scanf("%f",&r);
	
	i=((p*n*r)/100);
	
	printf("\n\n%f is the Simple Interest",i);
	
}
