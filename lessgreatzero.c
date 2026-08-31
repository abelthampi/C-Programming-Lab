#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	
	if(num>0)
		printf("\nNumber is positive");
	else if(num<0)
		printf("\nNumber is negative");
	else 
		printf("\nNumber is 0");
}
