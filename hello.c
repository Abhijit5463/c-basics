#include<stdio.h>
#include<windows.h>
int main()
{
    COORD c;
    c.X=40;
    c.Y=13;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("hello abhijit");
    getch();
}
