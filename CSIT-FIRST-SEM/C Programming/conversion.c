//Conversion Program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 80

void design(char,int);
int menu(void);
void initial_choice(int);
void option_1(char);
void option_2(char);
void option_3(char);
void option_4(char);	
/*void option_1a(char,int);
void option_1b(char,int);
void option_1c(char,int);
void option_1d(char,int);
void option_1e(char,int);
void option_1f(char,int);
void option_2a(char,int);
void option_2b(char,int);
void option_2c(char,int);
void option_2d(char,int);
void option_2e(char,int);
void option_2f(char,int);
void option_2g(char,int);
void option_3a(char,int);
void option_3b(char,int);
void option_3c(char,int);
void option_3d(char,int);
void option_4a(char,int);
void option_4b(char,int);
void option_4c(char,int);
*/

int main()
{
	design('*',0);
	initial_choice(menu());	
	return 0;
}

void design(char c,int n)
{
	int i;
	char s[50];
	if(n==0)
	{
		strcpy(s,"CONVERSION");
	}
	else if (n==1)
	{
		strcpy(s,"TIME CONVERSION");
	}
	else if (n==2)
	{
		strcpy(s,"LENGTH CONVERSION");
	}
	else if (n==3)
	{
		strcpy(s,"NUMBER CONVERSION");
	}
	else if (n==4)
	{
		strcpy(s,"TEMPERATURE CONVERSION");
	}
	
	printf("\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%c",c);		
	}
	printf("\n\t\tWELCOME TO %s PROGRAM\n",s);
	for(i=0;i<SIZE;i++)
	{
		printf("%c",c);		
	}
	printf("\n");
}

int menu()
{
		int choice;
		printf("\n1.Time Conversion");
		printf("\n2.Length Conversion");
		printf("\n3.Number Conversion");
		printf("\n4.Temperature Conversion");
		printf("\n5.Exit");
		printf("\n\nEnter your choice: ");
		scanf("%d",&choice);
		return choice;
}

void initial_choice(int c)
{	
	char unit;
	
	switch(c)
	{
		case 1:
			
				design('*',1);
				printf("\nEnter the unit of time to be converted:\na.Seconds\nb.Minutes\nc.Days\nd.Weeks\ne.Months\nf.Years\n\nEnter your choice: ");
				scanf("%c",&unit);
				option_1(unit);
				break;
		case 2:
			{
				design('*',2);
				printf("\nEnter the unit of length to be converted:\na.Milimeter(mm)\nb.Centimeter(cm)\nc.Meter(m)\nd.Kilometer(km)\ne.Miles\nf.Feet\ng.Inches\n\nEnter your choice: ");
				scanf("%c",&unit);
				option_2(unit);
			}
			break;
		case 3:
			{
				design('*',3);
				printf("\nEnter the system of number to be converted:\na.Binary\nb.Decimal\nc.Octal\nd.Hexadecimal\n\nEnter your choice: ");
				scanf("%c",&unit);
				option_3(unit);
			}
			break;
		case 4:
			{
				design('*',4);
				printf("\nEnter the unit of temperature to be converted:\na.Centigrade(oC)\nb.Fahrenheit(oF)\nc.Kelvin(oK)\n\nEnter your choice: ");
				scanf("%c",&unit); 
				option_4(unit);
			}
			break;
		case 5:
			exit(1);
			break;
		default:
			printf("\nWrong Command.\n");
			initial_choice(menu());
			break;
	}
}

void option_1(char u)
{	
	int value;
	char con_unit;
	begin:
	switch(u)
		{
			case 'a':
			{
				printf("\nEnter the time in Seconds: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Minutes\nb.To Days\nc.To Weeks\nd.To Months\ne.To Years# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				option_1a(con_unit,value);
			}
			break;
			case 'b':
			{
				printf("\nEnter the time in Minutes: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Seconds\nb.To Days\nc.To Weeks\nd.To Months\ne.To Years# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_1b(con_unit,value);
			}
			break;
			case 'c':
			{
				printf("\nEnter the time in Days: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Seconds\nb.To Minutes\nc.To Weeks\nd.To Months\ne.To Years# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_1c(con_unit,value);
			}
			break;
			case 'd':
			{
				printf("\nEnter the time in Weeks: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Seconds\nb.To Minutes\nc.To Days\nd.To Months\ne.To Years# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_1d(con_unit,value);
			}
			break;
			case 'e':
			{
				printf("\nEnter the time in Months: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Seconds\nb.To Minutes\nc.To Days\nd.To Weeks\ne.To Years# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_1e(con_unit,value);
			}
			break;
			case 'f':
			{
				printf("\nEnter the time in Years: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Seconds\nb.To Minutes\nc.To Days\nd.To Weeks\ne.To Months# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_1f(con_unit,value);
			}
			break;
			case '#':
			{
			initial_choice(menu());
			break;
			}
			default:
			printf("\nWrong Command.\n");
			goto begin;
			break;
			
		}
}

void option_2(char u)
{	
	int value;	
	char con_unit;
	begin:
	switch(u)
		{
			case 'a':
			{
				printf("\nEnter the length in Milimeters(mm): ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Centimeters(cm)\nb.To Meters(m)\nc.To Kilometers(km)\nd.To Miles\ne.To Feet\nf.To Inches# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_2a(con_unit,value);
			}
			break;
			case 'b':
			{
				printf("\nEnter the length in Centimeters(cm): ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Milimeters(mm)\nb.To Meters(m)\nc.To Kilometers(km)\nd.To Miles\ne.To Feet\nf.To Inches# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_2b(con_unit,value);
			}
			break;
			case 'c':
			{
				printf("\nEnter the length in Meters(m): ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Milimeters(mm)\nb.To Centimeters(cm)\nc.To Kilometers(km)\nd.To Miles\ne.To Feet\nf.To Inches# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_2c(con_unit,value);
			}
			break;
			case 'd':
			{
				printf("\nEnter the length in Kilometers(km): ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Milimeters(mm)\nb.To Centimeters(cm)\nc.To Meters(m)\nd.To Miles\ne.To Feet\nf.To Inches# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_2d(con_unit,value);
			}
			break;
			case 'e':
			{
				printf("\nEnter the length in Miles: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Milimeters(mm)\nb.To Centimeters(cm)\nc.To Meters(m)\nd.To Kilometers(km)\ne.To Feet\nf.To Inches# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_2e(con_unit,value);
			}
			break;
			case 'f':
			{
				printf("\nEnter the length in Feet: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Milimeters(mm)\nb.To Centimeters(cm)\nc.To Meters(m)\nd.To Kilometers(km)\ne.To Miles\nf.To Inches# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_2f(con_unit,value);
			}
			break;
			case 'g':
			{
				printf("\nEnter the length in Inches: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Milimeters(mm)\nb.To Centimeters(cm)\nc.To Meters(m)\nd.To Kilometers(km)\ne.To Miles\nf.To Feet# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_2g(con_unit,value);
			}
			break;
			case '#':
			{
			initial_choice(menu());
			break;
			}
			default:
			printf("\nWrong Command.\n");
			goto begin;
			break;
		}
}

void option_3(char u)
{	
	int value;
	char con_unit;
	begin:
	switch(u)
		{
			case 'a':
			{
				printf("\nEnter the Number in Binary: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Decimal\nb.To Octal\nc.To Hexadecimal\n# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_3a(con_unit,value);
			}
			break;
			case 'b':
			{
				printf("\nEnter the Number in Decimal: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Binary\nb.To Octal\nc.To Hexadecimal\n# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_3b(con_unit,value);
			}
			break;
			case 'c':
			{
				printf("\nEnter the Number in Octal: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Binary\nb.To Decimal\nc.To Hexadecimal\n# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_3c(con_unit,value);
			}
			break;
			case 'd':
			{
				printf("\nEnter the Number in Hexadecimal: ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Binary\nb.To Decimal\nc.To Octal\n# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_3d(con_unit,value);
			}
			break;
			case '#':
			{
			initial_choice(menu());
			break;
			}
			default:
			printf("\nWrong Command.\n");
			goto begin;
			break;
			
		}
}
void option_4(char u)
{	
	int value;
	char con_unit;
	begin:
	switch(u)
		{
			case 'a':
			{
				printf("\nEnter the Temperature in Centigrade(oC): ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Fahrenheit(oF)\nb.To Kelvin(oK)\n# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_4a(con_unit,value);
			}
			break;
			case 'b':
			{
				printf("\nEnter the Temperature in Fahrenheit(oF): ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Centigrade(oC)\nb.To Kelvin(oK)\n# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_4b(con_unit,value);
			}
			break;
			case 'c':
			{
				printf("\nEnter the Temperature in Kelvin(oK): ");
				scanf("%d",&value);
				printf("\nEnter the unit to be converted into:\na.To Centigrade(oC)\nb.To Fahrenheit(oF)\n# Go back to main menu\n\nEnter your choice: ");
				scanf("%c",&con_unit);
				//option_4c(con_unit,value);
			}
			break;
			case '#':
			{
			initial_choice(menu());
			break;
			}
			default:
			printf("\nWrong Command.\n");
			goto begin;
			break;
			
		}
}	

void option_1a(char,int);
/*{
	
	switch(c)
	{
		case a:
				printf("%d minutes,%d seconds",(value/60),(value%60));
				break;
		case b:
				printf("%d minutes,%d seconds",(value/60),(value%60));
				break;
	}

}
void option_1b(char,int)
void option_1c(char,int)
void option_1d(char,int)
void option_1e(char,int)
void option_1f(char,int)
void option_2a(char,int)
void option_2b(char,int)
void option_2c(char,int)
void option_2d(char,int)
void option_2e(char,int)
void option_2f(char,int)
void option_2g(char,int)
void option_3a(char,int)
void option_3b(char,int)
void option_3c(char,int)
void option_3d(char,int)
void option_4a(char,int)
void option_4b(char,int)
void option_4c(char,int)
*/
