#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int random();
int winner(int s);
void main()
{
    char *ptr;
    int len, d, s;
    printf("THE NAME LENGTH OF THE PLAYER\n");
    scanf("%d", &len);
    ptr = (char *)calloc(len + 1, sizeof(char));
    printf("THE NAME OF THE PLAYER\n");
    scanf("%s", &ptr);
    for (int i = 0; i <= 2; i++)
    {
        d = random();
        s = winner(d);
    }

    if (s == 1)
    {
        printf("COMPUTER IS WINNER\n");
    }
    else if (s == 2)
    {
        printf("%s is the winner", ptr);
    }
    else
        printf("THE MATCH IS DRAW");
}
int random()
{
    srand(time(NULL));
    int d = rand() % 3;
}
int winner(int s)
{
    int cp = 0, cc = 0, c;
    printf("\nENTER (0)ROCK (1)SCISSOR (2)PAPER\n");
    scanf("%d", &c);
    if (c == 0)
    {
        if (s == 0)
        {
            ++cp, ++cc;
        }
        else if (s == 1)
        {
            ++cp;
        }
        else
        {
            ++cc;
        }
    }
    else if (c == 1)
    {
        if (s == 0)
        {
            ++cc;
        }
        else if (s == 1)
        {
            ++cc;
            ++cp;
        }
        else
        {
            ++cp;
        }
    }
    else
    {
        if (s == 0)
        {
            ++cp;
        }
        else if (s == 1)
        {
            ++cc;
        }
        else
        {
            ++cc, ++cp;
        }
    }
    if (cp < cc)
    {
        return 1;
    }
    else if (cp > cc)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
