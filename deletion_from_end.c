#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *deletion_ending(struct node *head)
{   
    int i=0,j=0;
    struct node *ptr=head;
    struct node *qtr=head;

    while(j!=7)
    {
       head=head->next; 
       j++;      
    }
     while(i!=6)
    {
       ptr=ptr->next; 
       i++;      
    }
    ptr->next=head->next;
    free(head);
    return qtr;
}

void printing(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
}

void main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));
    struct node *fifth=(struct node*)malloc(sizeof(struct node));
    struct node *six=(struct node*)malloc(sizeof(struct node));
    struct node *seven=(struct node*)malloc(sizeof(struct node));
    struct node *eight=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;

    second->data=50;
    second->next=third;

    third->data=60;
    third->next=fourth;

    fourth->data=70;
    fourth->next=fifth;

    fifth->data=80;
    fifth->next=six;

    six->data=90;
    six->next=seven;

    seven->data=100;
    seven->next=eight;

    eight->data=200;
    eight->next=NULL;



    printf("\nARRAY BEFORE THE DELETION\n");
    printing(head);
    printf("\nARRAY AFTER THE DELETION\n");
    deletion_ending(head);
    printing(head);
}

