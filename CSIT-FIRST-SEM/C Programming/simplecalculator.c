#include <stdio.h>
#include <stdlib.h>
#define LEN 80
void design(char);
void add(float,float);
void sub(float,float);
void mul(float,float);
void divs(float,float);
int main()
{
float a,b;
int choice;
design('*');
begin:
	printf("\n\nEnter any two numbers: ");
	scanf("%f %f",&a,&b);
	do{
	printf("\n\nOPERATIONS\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n5.New Numbers for operation\n6.Exit\n\nEnter your choice of operation: ");
	scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				add(a,b);
				break;
			case 2:
				sub(a,b);
				break;
			case 3:
				mul(a,b);
				break;
			case 4:
				divs(a,b);
				break;
			case 5:
				goto begin;
				break;
			case 6:
				exit(1);
				break;
			default:
				printf("Wrong Command");
				break;
		}
	}while(1);
return 0;
}
void design(char x)
{
	for (int i=0;i<LEN;i++)
	{
		printf("%c",x);
	}
	printf("\n\t\tWELCOME TO SIMPLE CALCULATOR PROGRAM\n");
	for (int i=0;i<LEN;i++)
	{
		printf("%c",x);
	}
}
void add(float x,float y)
{
	printf("\nAddition of %.2f and %.2f is %.2f.",x,y,x+y);
}
void sub(float x,float y)
{
	printf("\nSubtraction of %.2f and %.2f is %.2f.",x,y,x-y);
}
void mul(float x,float y)
{
	printf("\nMultiplication of %.2f and %f is %.2f.",x,y,x*y);
}
void divs(float x,float y)
{
	printf("\nDivision of %.2f and %.2f is\n",x,y);
	printf("Quotient = %.2f\n",x/y);
	printf("Remainder = %.2f",(int)x%(int)y);
}
