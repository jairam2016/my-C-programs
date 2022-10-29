#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int frontindx;
    int backindx;
    int *arr;
};
void enqueue(struct queue *ptr, int val)
{
    if ((ptr->backindx + 1) % ptr->size == ptr->frontindx)
    {
        printf("\nTHE CIRCULAR QUEUE IS FULL\n");
    }

    else
    {
        ptr->backindx = (ptr->backindx + 1) % ptr->size;
        ptr->arr[ptr->backindx] = val;
        if (ptr->frontindx == -1)
        {
            ptr->frontindx = (ptr->frontindx + 1) % ptr->size;
        }
    }
}
int dequeue(struct queue *ptr)
{
    int val;
    if (ptr->frontindx == -1)
    {
        printf("\nTHE QUEUE IS EMPTY");
    }
    else 
    {
        val=ptr->arr[ptr->frontindx];
        if(ptr->frontindx==ptr->backindx)
        {
            ptr->frontindx=ptr->backindx=-1;
        }
        else
        {
            ptr->frontindx=(ptr->frontindx+1)%ptr->size;
        }
    }
    return val;
}
void printing(struct queue *ptr)
{
    int i;
    for (i = ptr->frontindx; i != ptr->backindx; i = (i + 1) % ptr->size)
    {
        printf("%d\t", ptr->arr[i]);
    }
    printf("%d",ptr->arr[i]);
}
void main()
{
    struct queue *ptr = (struct queue *)malloc(sizeof(struct queue));
    ptr->size = 10;
    ptr->frontindx = ptr->backindx = -1;
    ptr->arr = (int *)malloc(ptr->size * sizeof(int));

    int val, del, ch;
    do
    {
        printf("\nENTER YOUR CHOICE");
        printf("\n1.ENQUEUE");
        printf("\n2.DEQUEUE");
        printf("\n3.DISPLAY");
        printf("\n4.EXIT\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nENTER THE VALUE OF THE ELEMENT:");
            scanf("%d", &val);
            enqueue(ptr, val);
            break;

        case 2:
            printf("\nELEMENT REMOVED FROM THE QUEUE IS %d", dequeue(ptr));
            break;

        case 3:
            printing(ptr);
            break;

        case 4:
            exit(4);

        default:
            printf("\nWRONG INPUT ENTERED");
        }
    } while (ch != 4);
}