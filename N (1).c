#include<stdio.h>
#include<conio.h>
#include<windows.h>

int height = 5;
int width = 9;


void realityT()
{
    int i, j;
    for (i = 0; i < height; i++){
        gotoxy(15,i);
        printf("*");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1) || (i == height / 2 && j <= height / 2))
                printf("*");
            else
                continue;
        }
        printf("\n");
    }
}

int main()
{
    system("Color 0A");
    realityT();
    return 0;
}

int gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
