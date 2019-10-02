#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
int printrandoms(int lower, int upper, int count)
{
    int i,num;
    for(i=0;i<count;i++)
    num = (rand()%(upper-lower+1))+lower;
    return num;
}
void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
    int x=50,y=13, a=10,b=20, lower = 5, upper = 70,count = 1;
    char ch;
    printf("To move upward press r\n To move downward press v\n To move left press d\n To move right press g\n To move diagonally upward left press e\n To move diagonally upward right press t\n To move diagonally left downward press c\n To move diagonally right downward press b\n");
    gotoxy(a,b);
    printf("Anand");
    gotoxy(x,y);
    printf("Abhijit");

    while(1)
    {
        ch=getch();
        switch(ch)
        {
            case '8':
            {y--;
            break;}
            case '2':
            {y++;
            break;}
            case '4':
            {x-=2;
            break;}
            case '6':
            {x+=2;
            break;}
            case '7':
            {x-=2;y--;
            break;}
            case '9':
            {x+=2;y--;
            break;}
            case '1':
            {y++;x-=2;
            break;}
            case '3':
            {y++;x+=2;
            break;}
            case 27:
                exit (0);

        }
        system("cls");
        gotoxy(x,y);
        printf("Abhijit");
        if(x==a+5||x==a+4||x==a+3||x==a+2||x==a+13||x==a-13)
        {
           if(y==b-1||y==b+1||y==b)
           {
            a=printrandoms(lower=5,upper=300, count );b=printrandoms(lower=3,upper=100, count) ;
            gotoxy(a,b);
            printf("Anand");
            gotoxy(x+7,y);
           }
        }
        else
        {
            gotoxy(a,b);
            printf("Anand");

        }



    }
}

