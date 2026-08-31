//
#include<stdio.h>
#include<conio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void main()
{
	int a,b,add_result,sub_result,mul_result,div_result;
	add_result= add(a,b);
	sub_result= sub(a,b);
	mul_result= mul(a,b);
	div_result= div(a,b);	
	printf("\nAddition= %d",add_result);
	printf("\nSubtraction= %d",sub_result);
	printf("\nMultiplication= %d",mul_result);
	printf("\nDivision= %d",div_result);
}
int add(int a, int b)
{
	 int sum;
	 a=20;
	 b=10;
	sum= a+b;
}
int sub(int a, int b)
{
	 int sub;
	 a=20;
	 b=10;
	sub= a-b;
}
int mul(int a, int b)
{
	 int mul;
	 a=20;
	 b=10;
	mul= a*b;
}
int div(int a, int b)
{
	 int div;
	 a=20;
	 b=10;
	div= a/b;
}

