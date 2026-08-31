
//2D matrix
#include<conio.h>
#include<stdio.h>
void main()
{
	int r,c,a[10][10],i,j;
	printf("Enter no: of row and column of matrix: ");
	scanf("%d%d",&r,&c);
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
