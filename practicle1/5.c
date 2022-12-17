#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float c,fr;
printf("Enter the temp in centigrade ");
scanf("%f",&c);
fr=(c*9/5);
fr=fr+32;
printf(" %f " ,fr);
getch();
}
