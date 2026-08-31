
//2D matrix
#include<conio.h>
#include<stdio.h>
void main()
{
	//matrix 1
	int r,c,a[10][10],i,j,d[10][10],b[10][10];
	printf("Enter no: of row and column of matrix1: ");
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
	//matrix 2
	
	printf("Enter no: of row and column of matrix2: ");
	scanf("%d%d",&r,&c);
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	//sum of matrices
	printf("\nSum of matrices is: \n\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			d[i][j]=a[i][j]	+ b[i][j];
			printf("\t%d",d[i][j]);
		}
		printf("\n");
	}
}
