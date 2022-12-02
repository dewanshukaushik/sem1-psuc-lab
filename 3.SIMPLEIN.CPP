#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int p,r,t;
float ci,si=0;
 printf("Enter the principle , rate and time  ");
 scanf("%d%d%d",&p,&r,&t);
 si=(p*r*t)/100;
 ci=p*pow(1+r/100,t);
 printf("simple interest = %f ",si);
 printf("   \ncompound interest = %f",ci);

 getch();
 }