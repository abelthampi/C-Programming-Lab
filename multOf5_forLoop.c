//multiplication table of 5
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num=5,result;
	for (i=1;i<11;i++)
	{
		result= i*num;
		printf("%d * %d = %d\n",i,num,result);
	}
}

