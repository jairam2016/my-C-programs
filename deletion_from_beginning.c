#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *deletion_beginning(struct node *head)
{
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
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
    head=deletion_beginning(head);
    printing(head);
}

