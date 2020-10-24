#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char id, pw;

head()
{
    system("color 0A");
    system("title SJ Project");
}

get_id()
{
    char id;
    printf("Please input your Student ID : ");
    scanf("%s", &id);
}

get_pw()
{
    int b = 1;
    printf("Please input your Personal Password : ");
    getch();
    if ()
    {
        break
    }
    else
    {
        << pw;
        printf("*");
    }
}

send_id()
{
    printf("Your Student ID is : %s", id);
}

send_pw()
{
    printf("Your Personal%s", pw);
}

main()
{
    head();
    get_id();
    get_pw();
    send_id();
    send_pw();
    getch();
}