#include<stdio.h>
#include<stdlib.h>
void main()
{
    int choice;
    printf("\nENTER THE NUMBER TO GET THE DAY: ");
    scanf("%d",&choice);
    switch(choice-1)
    {
        case 0:
            printf("\nTHE DAY IS SUNDAY");
            break;

        case 1:
            printf("\nTHE DAY IS MONDAY");
            break;
        
        case 2:
            printf("\nTHE DAY IS TUESDAY");
            break;

        case 3:
            printf("\nTHE DAY IS WEDNESDAY");
            break;

        case 4:
            printf("\nTHE DAY IS THURSDAY");
            break;

        case 5:
            printf("\nTHE DAY IS FRIDAY");
            break;

        case 6:
            printf("\nTHE DAY IS SATURDAY");
            break;
     default:printf("\nINVALID NUMBER ENTERED");
    }
}