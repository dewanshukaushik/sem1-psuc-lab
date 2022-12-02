#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float r,pi=3.14,area,circumference;
printf("enter the radius of circle ");
scanf("%f",&r);
area=pi*r*r;
circumference=2*pi*r*r;
printf("area of circle = %f",area);
printf("\n circumference of circle = %f",circumference);
getch();
}