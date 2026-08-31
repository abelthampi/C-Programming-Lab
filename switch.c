#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2;
	char choice;
	
	printf("\nEnter number 1: ");
	scanf("%d",&num1);
	printf("\nEnter number 2: ");
	scanf("%d",&num2);
	
	
	printf("\na.Addition");
	printf("\nb.Subtraction");
	printf("\nc.Multiplication");
	printf("\nd.Division");
	
	printf("\n\nEnter Your Choice: ");
	scanf("%c",&choice);
	
	switch('choice')
	{
		case 'a':
			printf("\nResult is %d",num1+num2);
			break;
		case 'b':
			printf("\nResult is %d",num1-num2);
			break;
		case 'c':
			printf("\nResult is %d",num1*num2);
			break;
		case 'd':
			printf("\nResult is %d",num1/num2);
			break;
		
		default:
			printf("\nInvalid!!!");
	}
}
