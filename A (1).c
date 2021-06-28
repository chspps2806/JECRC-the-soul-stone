#include<stdio.h>
#include<conio.h>
#include<windows.h>

int height = 5;
int width = 9;

void realityO()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0)
            {
                if(j==0)
                    gotoxy(25,0);
                printf("* ");
            }
            else if (j == height / 2)
                printf("*");
            else
            {
                gotoxy(28,i);
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    system("Color 0A");
    realityO();
    return 0;
}

int gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
