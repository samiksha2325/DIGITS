#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,n1,n2,count=0;
printf("enter the no.");
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
n2=n/10;
count++;
}
printf("%d",count);
getch();
}
