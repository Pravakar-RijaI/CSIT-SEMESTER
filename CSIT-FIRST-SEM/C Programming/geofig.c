//Program to find area and perimeter/circumference of different geometrical figures

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 80
#define PI 3.1415

void design(char);
void line();
void triangle();
void square();
void rectangle();
void cube();
void circle();
void sphere();

int main()
{
	int choice;
	design('*');
	do
	{
		printf("\n\nGeometrical Figures Available for Calculation\n");
		printf("\n1.LINE\n2.TRIANGLE\n3.SQUARE\n4.RECTANGLE\n5.CUBE\n6.CIRCLE\n7.SPHERE\n8.EXIT\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				line();
				break;
			case 2:
				triangle();
				break;
			case 3:
				square();
				break;
			case 4:
				rectangle();
				break;
			case 5:
				cube();
				break;
			case 6:
				circle();
				break;
			case 7:
				sphere();
				break;
			case 8:
				exit(1);
				break;
		}
	}while(1);
	return 0;
}
void design(char c)
{	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%c",c);		
	}
	printf("\n\t\tWELCOME TO GEOMETRICAL OPERATION PROGRAM\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%c",c);		
	}
	printf("\n");
}
void line()
{
	float x1,y1,x2,y2;
	printf("\nEnter the initial points of the line: ");
	scanf("%f %f",&x1,&y1);
	printf("Enter the final points of the line: ");
	scanf("%f %f",&x2,&y2);
	printf("The length of the line is %.2f.",(sqrt((pow((x2-x1),2))+(pow((y2-y1),2)))));
}
void triangle()
{
	float s,a,b,c;
	printf("\nEnter the length of three sides of the triangle: ");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	if(a+b>c && a+c>b && b+c>a)
	{
	printf("\nThe area of the triangle is %.2f.",(sqrt(s*(s-a)*(s-b)*(s-c))));
	printf("\nThe perimeter of the triangle is %.2f.",(a+b+c));
	}
	else
	printf("\nInvalid length of sides for a triangle(Ensure length of any two sides is greater than third side).");
	}
void square ()
{
	float length;
	printf("\nEnter the length of the square: ");
	scanf("%f",&length);
	printf("\nThe area of the square is %.2f.",(length*length));
	printf("\nThe perimeter of the square is %.2f.",(4*length));
}
void rectangle ()
{
	float length,breadth;
	printf("\nEnter the length of the rectangle: ");
	scanf("%f",&length);
	printf("\nEnter the breadth of the rectangle: ");
	scanf("%f",&breadth);
	printf("\nThe area of the rectangle is %.2f.",(length*breadth));
	printf("\nThe perimeter of the rectangle is %.2f.",(2*(length+breadth)));
}
void cube ()
{
	float length;
	printf("\nEnter the length of the cube: ");
	scanf("%f",&length);
	printf("\nThe area of the cube is %.2f.",(6*length*length));
	printf("\nThe perimeter of the cube is %.2f.",(12*length));
}
void circle()
{
	float radius;
	printf("\nEnter the radius of the circle: ");
	scanf("%f",&radius);
	printf("\nThe area of the circle is %.2f.",(PI*radius*radius));
	printf("\nThe circumference of the circle is %.2f.",(2*PI*radius));
}
void sphere()
{
	float radius;
	printf("\nEnter the radius of the sphere: ");
	scanf("%f",&radius);
	printf("\nThe area of the sphere is %.2f.",(4*PI*radius*radius));
	printf("\nThe volume of the sphere is %.2f.",((4/3)*PI*pow(radius,3)));
}
