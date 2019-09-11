#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
 printf("enter three numbers");
 scanf("%d%d%d",&a,&b,&c);
 printf("the greatest number is%d",a>b&&a>c?a:b>c&&b>a?b:c);
 getch();

}
