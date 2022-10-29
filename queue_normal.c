#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int frontindx;
    int backindx;
    int *arr;
};

int isFull(struct queue *ptr)
{
    if (ptr->backindx == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct queue *ptr)
{
    if (ptr->frontindx == ptr->backindx == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("THE QUEUE IS FULL YOU CANNOT INSERT\n");
    }

    else 
    {
        ptr->arr[++ptr->backindx]=val;
        if(ptr->frontindx==-1)
        {
            ptr->frontindx=0;
        }
    }
}

int dequeue(struct queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("THE QUEUE IS EMPTY\n");
    }
    else
    {
        int val = ptr->arr[ptr->frontindx];
        ptr->frontindx++;
        if(ptr->frontindx==ptr->backindx)
        {
            ptr->frontindx=ptr->backindx=-1;
        }
        return val;
    }
}

void printing(struct queue *ptr)
{
    for (int i = ptr->frontindx; i <= ptr->backindx; i++)
    {
        printf("THE VALUE IS %d\n", ptr->arr[i]);
    }
}
void main()
{
    int ch, val, del;
    struct queue *sp;
    sp->size = 100;
    sp->frontindx = -1;
    sp->backindx = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    do
    {

        printf("\nENTER YOUR CHOICE");
        printf("\n1.ENQUEUE");
        printf("\n2.DEQUEUE");
        printf("\n3.DISPLAY");
        printf("\n4.EXIT");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nenter the element to be enqueued:\t");
            scanf("%d", &val);
            enqueue(sp, val);
            break;

        case 2:
            printf("\nDEQUED ELEMENT IS %d", dequeue(sp));
            break;

        case 3:
            printf("\nTHE CONTENT OF THE QUEUE IS\n");
            printing(sp);
            break;

        case 4:
            exit(4);

        default:
            printf("\nENTER VALID INPUT\n");
        }
    } while (ch != 4);
}
