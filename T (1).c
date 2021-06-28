#include<stdio.h>
#include<conio.h>
#include<windows.h>

int height = 5;
int width = 9;


void realityS()
{
    int n = width / 2, i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == n || j == (width - n)
                || (i == height / 2 && j > n
                    && j < (width - n)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        n--;
    }
}

int main()
{
    system("Color 0A");
    realityS();
    return 0;
}

int gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
