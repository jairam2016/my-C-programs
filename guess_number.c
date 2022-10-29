#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int random()
{
    srand(time(NULL));
    int d = rand() % 100;
    return d;
}
int input()
{

    int i;
    printf("ENTER THE INPUT\n");
    scanf("%d", &i);
    return i;
}
int guess(int random_no)
{
    if (random_no < 10)
    {
        printf("\nIT IS A SINGLE DIGIT NUMBER\n");
    }
    else if (random_no >= 10 && random_no <= 50)
    {
        printf("\nIT IS A DOUBLE DIGIT NUMBER LESS THAN 50\n");
    }
    else if (random_no > 50 && random_no <= 99)
    {
        printf("\nIT IS A DOUBLE DIGIT NUMBER GREATER THAN 50\n");
    }
    int dupli = -12;
    int count = 0;
    while (dupli != random_no)
    {
        int diff;
        int input_no = input();
        dupli = input_no;
        diff = input_no - random_no;
        if (diff < 0)
        {
            if ((random_no - input_no) >= 10)
            {
                printf("\nGUESS IS TOO LESS...INCREASE YOUR GUESS NUMBER\n");
            }
            else if ((random_no - input_no) <= 10)
                if ((random_no - input_no) <= 5)
                {
                    printf("\nGUESS IS VERY VERY CLOSE TO THE NUMBER\n");
                }
                else
                {
                    printf("\nGUESS IS CLOSE TO THE NUMBER\n");
                }
        }
        else if (diff > 0)
        {
            if (diff >= 10)
            {
                printf("\nGUESS IS TOO MORE.....DECREASE YOUR GUESS NUMBER\n");
            }
            else if (diff < 10)
                if ((random_no - input_no) <= 5)
                {
                    printf("\nGUESS IS VERY VERY CLOSE TO THE NUMBER\n");
                }
                else
            {
                printf("\nGUESS IS CLOSE TO THE NUMBER\n");
            }
        }
        else if (diff = 0)
        {
            printf("\nYOU GUESSED THE NUMBER IN FIRST ATTEMPT\n");
            return count++;
        }
        count++;
    }
    return count;
}
void main()
{
    int win, d;
    printf("PROGRAM TO GUESS THE RANDOM NUMBER\n");
    d = random();
    win = guess(d);
    printf("YOU HAVE GUESSED THE NUMBER IN %d COUNTS", (win - 1));
}