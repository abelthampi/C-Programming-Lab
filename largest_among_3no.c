//Largest of 3 nos

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
		printf("\nEnter 3 numbers: ");
		scanf("%d%d%d",&a,&b,&c);
		
		if (a>b)
		{
			if (a>c)
				printf("\n%d is the largest",a);
			else
				printf("\n%d is the largest",c);
		}
		else
		{
			if (b>c)
				printf("\n%d is the largest",b);
			else
				printf("\n%d is the largest",c);
		}
}
