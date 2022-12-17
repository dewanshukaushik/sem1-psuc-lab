#include<stdio.h>
#include<conio.h>
void main()
{
int work,age;
printf("enter a age");
scanf("%d",&age);
if(age>25)
{printf("your working hours is 8");
}
else if(age>=21)
{printf("your working hours is 6");
}
else if(age>=16)
{printf("your working hour is 3");
}
else if (age>=11)
{printf("your working hour is 0");
}
else if(age>=0)
{printf("your working hour is 0");
}
else{
printf("not valid");
}
getch();
}
