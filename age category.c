#include<stdio.h>
#include<conio.h>
int main()
{
 int x;
 printf("Enter the age");
 scanf("%d",&x);
if(x<18)
    printf("He is child");
if(x>18&&x<60)
printf("He is adult");
if(x>60)
printf("He is in senior citizen");
getch();
}
