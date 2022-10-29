#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *enqueue(struct node *backindx,int val)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("THE QUEUE IS FULL\n");
    }
    else
    {
        n->data=val;
        n->next=NULL;
        if(backindx==NULL)
        {
            backindx=n;
        }
        else
        {
            backindx->next=n;
            backindx=n;
        }
    }
    return backindx;
}
struct node *dequeue(struct node *frontindx)
{
    struct node *ptr=frontindx;
    frontindx=frontindx->next;
    int val=ptr->data;
    printf("ELEMENT DEQUED IS %d\n",val);
    free(ptr);
    return frontindx;
}
void printing(struct node *frontindx)
{
    struct node *ptr=frontindx;
    while(ptr != NULL)
    {
        printf("THE ELEMENT IS %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void main()
{
    struct node *frontindx=NULL;
    struct node *backindx=NULL;
    backindx=enqueue(backindx,12);
    frontindx=backindx;
    backindx=enqueue(backindx,22);
    backindx=enqueue(backindx,29);
    backindx=enqueue(backindx,82);
    backindx=enqueue(backindx,25);
    backindx=enqueue(backindx,32);
    backindx=enqueue(backindx,45);
    backindx=enqueue(backindx,55);
    printf("PRINTING BEFORE DEQUEING\n");
    printing(frontindx);
    printf("PRINTING AFTER DEQUEING\n");
    frontindx=dequeue(frontindx);
    frontindx=dequeue(frontindx);
    frontindx=dequeue(frontindx);
    printing(frontindx);
}