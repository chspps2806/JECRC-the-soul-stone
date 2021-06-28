#include<stdio.h>
#include<conio.h>
#include<windows.h>

int height = 5;
int width = 9;

int main()
{
    system("Color 0A");
    printf("\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Ren'21 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t+------+------+------+------+------+\n");
    printf("\t\t  Code Hide & Seek\n");
    printf("\t\t  ________________\n\n\n");
    jarvis();
}

int jarvis()
{
    while(1)
    {
        system("Color 0A");
        const char pass[]="\x61\x65\x74\x68\x65\x72";
        const char passC[]="\x41\x45\x54\x48\x45\x52";
        char input[20], ch ;
        int i,n,p;
        i=0;
        printf("Passcode to hack into account: ");
        while((ch=_getch())!='\r')
        {
            putch('*');
            input[i]=ch;
            i++;
        }
        n=compare(pass,input);
        p=compare(passC,input);
        if(n==0 || p==0)
        {
            fun();
            break;
        }
        else
        {
            system("Color 4F");
            printf("\nuhhh, incorrect Thanos got the stone\n");
            printf("Try again\n\n");
            printf("Press any key to continue.....");
            _getch();
            printf("\n\n");
        }
    }
    _getch();
    return 0;
}

int compare(char a[],char b[])
{
    int flag=0,i=0;
    while(a[i]!='\0' &&b[i]!='\0')
    {
       if(a[i]!=b[i])
       {
           flag=1;
           break;
       }
       i++;
    }
    if(flag==0)
    return 0;
    else
    return 1;
}

int gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int fun()
{
    system("Color 70");
    system("cls");
    printf("\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Ren'21 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t+------+------+------+------+------+\n");
    printf("\t\t  Code Hide & Seek\n");
    printf("\t\t  ________________\n\n\n");
    printf("\n\x43\x6F\x6E\x67\x72\x61\x74\x73 ");
    printf("you did it \x1 \x3 \nYou saved The Reality ");
    printf("Stone from Thanos\n\x47\x69\x74\x48\x75\x62 \x49\x44: jecrc asgard\n");
}
