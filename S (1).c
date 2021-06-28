#include<stdio.h>
#include<conio.h>
#include<windows.h>

int height = 5;
int width = 9;

void reality()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        gotoxy(60,i);
        printf("*");
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == half) && j < (width - 2))
                printf("*");
            else if (j == (width - 2) && !(i == 0 || i == half))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    system("Color 0A");
    reality();
    return 0;
}

int gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

