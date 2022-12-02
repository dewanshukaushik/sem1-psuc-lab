#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("enter the num 1 ");
   scanf("%d",&a);
   printf("enter the num 2 ");
   scanf("%d",&b);
   printf("enter the num 3 ");
   scanf("%d",&c);
     if(a>b && a>c)
     {
     printf("num1 is greater");
      }
      else if(b>c)
      {
      printf("num2 is greater");
      }
      else {
      printf("num3 is greater");
	    }
	    getch();
	     }