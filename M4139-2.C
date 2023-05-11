#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int a;
printf("enter value of a");
scanf("%d",&a);
if(a==0)
{
printf("value is natural");
}
else if(a>0)


{
printf("value is positive");
}
else
{
printf("value is nagative");
}

getch();
}