#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,i;
    printf("enter the greater number 1st ");
    scanf("%d%d",&x,&y);


    if(x>y)
    {
            if(x%y==0)
                printf("The h.c.f is %d",y);

            else
                for(i=y;i>1;i--)
            {
                if(x%i==0 && y%i==0)
                {printf("The hcf is %d",i);
                break;
                }
            }
    }
    else
        if(y%x==0)
        printf("The h.c.f is %d",x);
    else
    {
    for(i=x;i>1;i--)
    {
        if(y%i==0&&x%i == 0)
        printf("The h.c.f is %d",i);
    break;
    }
    getch();
    }


    }







