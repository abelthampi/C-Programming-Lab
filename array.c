//1D Array

#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i, arr[10];
	printf("Enter length of array: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter array element: ");
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
