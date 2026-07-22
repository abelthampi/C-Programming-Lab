//Area and Perimeter of Rectangle

#include<stdio.h>
#include<conio.h>
void main()
{
		float Area,Perimeter,l,b;
		printf("\n\n To Find AREA & PERIMETER of Rectangle");
		printf("\n***************************************");
		printf("\n\nEnter Length of the Rectangle: ");
		scanf("%f",&l);
		printf("\nEnter Breadth of the Rectangle: ");
		scanf("%f",&b);
		
		Area=l*b;
		Perimeter=(2*(l+b));
		
		printf("\n%f is the Area of the Rectangle",Area);
		printf("\n%f is the Perimeter of the Rectangle\n",Perimeter);
}
