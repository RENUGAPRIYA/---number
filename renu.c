#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the value:");
scanf("%d",&n);
if(n==0)
{
printf("zero");
}
else if(n>0)
{printf("positive");
}
else
{
printf("negative");
}
getch();
}
