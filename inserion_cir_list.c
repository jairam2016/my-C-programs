#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printing(struct node *head)
{
    struct node *ptr=head;
    do
    {
        printf("%d\t",head->data);
        head=head->next;
    }while (head!=ptr);
}
struct node *insertion_beginning(struct node *head,int value)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=value;
    struct node *p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
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
    eight->next=head;

    printf("BEFORE THE INSERTION\n");
    printing(head);
    head=insertion_beginning(head,29);
    head=insertion_beginning(head,33);
    printf("\nAFTER THE INSERTION IN THE BEGINNING\n");
    printing(head);
}