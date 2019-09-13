#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
    int x=50,y=13;
    char ch;
    gotoxy(x,y);
    printf("Abhijit");
    while(1)
    {
        ch=getch();
        switch(ch)
        {
            case 'r':
            {y--;
            break;}
            case 'v':
            {y++;
            break;}
            case 'd':
            {x-=2;
            break;}
            case 'g':
            {x+=2;
            break;}
            case 'e':
            {x-=2;y--;
            break;}
            case 't':
            {x+=2;y--;
            break;}
            case 'c':
            {y++;x-=2;
            break;}
            case 'b':
            {y++;x+=2;
            break;}
            case 27:
                exit (0);

        }
        system("cls");
        gotoxy(x,y);
        printf("Abhijit");


    }
}
