//smallest of 3 numbers

#include<stdio.h>
#include<conio.h>
void main()
{
		int a,b,c;
		printf("\nEnter 3 numbers: ");
		scanf("%d%d%d",&a,&b,&c);
		
		if (a<b)
		{
			if (a<c)
				printf("\n%d is the smallest",a);
			else
				printf("\n%d is the smallest",c);
		}
		else
		{
			if (b<c)
				printf("\n%d is the smallest",b);
			else
				printf("\n%d is the smallest",c);
		}
}
