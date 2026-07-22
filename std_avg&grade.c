//prgm to accept student roll no, name, marks of 3 subject, and calc total avg and grade

#include<stdio.h>
#include<conio.h>
void main()
{
	int rollno,avg,sm1,sm2,sm3;
	char grade; 
	char stdname[20];
	
	printf("\nEnter Rollno of Student: ");
	scanf("%d",&rollno);
	printf("\nEnter Name of Student: ");
	scanf("%s",&stdname);
	
	printf("\n\nEnter Mark of subject1 out of 100: ");
	scanf("%d",&sm1);
	printf("\nEnter Mark of subject2 out of 100: ");
	scanf("%d",&sm2);
	printf("\nEnter Mark of subject2 out of 100: ");
	scanf("%d",&sm3);
	
	avg=((sm1+sm2+sm3)/3);
	
	if(sm1>=35&&sm1<60)
		printf("\nSubject1: Pass (D Grade)");
	else if(sm1>=60&&sm1<70)
		printf("\nSubject1: C Grade");
	else if(sm1>=70&&sm1<80)
		printf("\nSubject1: B Grade");
	else if(sm1>=80&&sm1<90)
		printf("\nSubject1: A Grade");
	else if(sm1>=90&&sm1<=100)
		printf("\nSubject1: A+ Grade");
	else if(sm1>100)
		printf("\nInvalid");
	else
		printf("\nSubject1: FAILED!");
		
	if(sm2>=35&&sm2<60)
		printf("\nSubject2: Pass (D Grade)");
	else if(sm2>=60&&sm2<70)
		printf("\nSubject2: C Grade");
	else if(sm2>=70&&sm2<80)
		printf("\nSubject2: B Grade");
	else if(sm2>=80&&sm2<90)
		printf("\nSubject2: A Grade");
	else if(sm2>=90&&sm2<=100)
		printf("\nSubject2: A+ Grade");
	else if(sm2>100)
		printf("\nInvalid");
	else
		printf("\nSubject2: FAILED!");	
	
	if(sm3>=35&&sm3<60)
		printf("\nSubject3: Pass (D Grade)");
	else if(sm3>=60&&sm3<70)
		printf("\nSubject3: C Grade");
	else if(sm3>=70&&sm3<80)
		printf("\nSubject3: B Grade");
	else if(sm3>=80&&sm3<90)
		printf("\nSubject3: A Grade");
	else if(sm3>=90&&sm3<=100)
		printf("\nSubject3: A+ Grade");
	else if(sm3>100)
		printf("\nInvalid"); 
	else
		printf("\nSubject3: FAILED!");
		
		
	printf("\n\nStudent Roll No: %d",rollno);
	printf("\nStudent Name: %s",stdname);
	
	printf("\nMark of Subject1: %d",sm1);
	printf("\nMark of Subject2: %d",sm2);
	printf("\nMark of Subject3: %d",sm3);
	printf("\nAverage mark of 3 subjects: %d",avg);
		
}
