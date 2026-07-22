//farrenhiet to celcius

#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f,sub;
	printf("\nEnter temperature in farrenheit: ");
	scanf("%f",&f);
	
	sub= (f-32);
	c=sub/1.8;
	
	printf("\n\nin celcius= %f",c);
}
