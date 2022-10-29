#include <stdio.h>
#include <stdlib.h>
#define MAX 20
struct node
{
    int data;
    struct node *next;
};
int arr[MAX];
struct node *temp;
struct node *ptr;
int c=0;
void push(int val)
{
    if(c==0)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=val;
        ptr->next=NULL;
        c++;
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        temp->next=ptr;
        ptr=temp;
    }
}
int pop()
{
    struct node *p=ptr;
    int val=p->data;
    ptr=ptr->next;
    free(p);
    return val;
}
void display()
{
    struct node *p=ptr;
    struct node *q=ptr;
    int i=0;

    while(q !=NULL)
    {
        arr[i]=q->data;
        q=q->next;
        i=i+1;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("\nELEMENT PUSHED IN THE STACK IS %d",arr[j]);
    }
}
void main()
{
    int val, ch, del;
    do
    {
        printf("\n1.INSERT A NODE");
        printf("\n2.DELETE THE NODE");
        printf("\n3.DISPLAY");
        printf("\n4.EXIT");
        printf("\nENTER THE CHOICE\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nENTER THE VALUE OF THE ELEMENT: ");
            scanf("%d", &val);
            push(val);
            break;

        case 2:
            printf("\nTHE POPED OUT ELEMENT IS:%d", pop());
            break;

        case 3:
            printf("\nTHE CONTENT IS:\n");
            display();
            break;

        case 4:
            exit(4);
        }

    } while (ch != 4);
}