#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("enter the first variable ");
scanf("%d",&a);
printf("enter the second variable ");
scanf("%d",&b);
a=b+a;
b=a-b;
a=a-b;
printf("first variable= %d,second varable= %d",a,b);
getch();
}