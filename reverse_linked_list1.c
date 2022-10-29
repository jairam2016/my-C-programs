#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *start;
void insertion(int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
    }
    else
    {
        //INSERTING AT THE END OF EACH NODE
        struct node *q=head;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=temp;
        temp->next=NULL;
    }
}
void reverse()
{
    start=head;
    struct node *t1=NULL;
    struct node *t2=NULL;
    while(start!=NULL)
    {
        t2=start->next;
        start->next=t1;
        t1=start;//WE NEED TO RETURN t1
        start=t2;
    }
    head=t1;
}
void display()
{
    struct node *q=head;
    while(q!=NULL)
    {
        printf("%d\t",q->data);
        q=q->next;
    }
}
void main()
{
    head=NULL;
    int ch,val;
    do
    {
        printf("\n1.INSERTION");
        printf("\n2.DISPLAY");
        printf("\n3.EXIT");
        printf("\nENTER YOUR CHOICE\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("\nENTER THE VALUE OF ELEMENT:");
                    scanf("%d",&val);
                    insertion(val);
                    break;

            case 2:
                    printf("\nTHE ELEMENTS BEFORE REVERSAL ARE:\n");
                    display();
                    printf("\nTHE ELEMENTS AFTER REVERSAL ARE:\n");
                    reverse();
                    display();
                    break;

            case 3:
                    exit(4);
        }
    }while(ch!=3);
}