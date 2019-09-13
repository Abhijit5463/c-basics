#include<stdio.h>
//#include<conio.h>
int main()
{
int x, r ;
do
{
printf("enter a number");
scanf("%d",&x);
if(x>0)
printf("postive");
else
printf("non postive number");
printf("\nif you want to exit then press 1 else press any digit");
scanf("%d",&r);
}while(r!=1);
}
