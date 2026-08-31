//type conversion

#include<stdio.h>
#include<conio.h>
void main()
{
	char c= 'A';
	int i=69;
	float f=2.2;
	double d=2.222222;

	printf("Char c = %c");
	printf("\nint i = %d");
	printf("\nfloat f = %f");
	printf("\ndouble d = %lf");
	
	printf("\n\nType Conversion");
	
	printf("\n\nChar to Int = %d",(int)c);
	printf("\nint to float= %f",(float)i);
	printf("\nfloat to int= %d",(int)f);
	printf("\nfloat to double= %f",(double)f);
	printf("\ndouble to float= %.2f",(float)d);
	printf("\nint to char= %c",(char)i);
	
	
	
	
	
}
