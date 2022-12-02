#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();

int eng,hindi,math,sst,science,sum,per;
printf("enter the subject marks  ");
scanf("%d%d%d%d%d",&eng,&hindi,&math,&sst,&science);
sum = eng+hindi+math+sst+science;
printf(" %d ",sum);
per = (sum*100)/500;
printf("\n %d",per);
getch();
}