#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x,factorial=1;
    printf("Enter the value");
    scanf("%d",&x);
    if(x>0)
    {
        for(i=1;i<=x;i++)
        {
        factorial=factorial*i;
        }
        printf("The factorial is %d",factorial);
    }

    else
        printf("wrong entry");
        getch();
}
