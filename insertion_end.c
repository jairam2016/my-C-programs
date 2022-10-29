#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
void printing(struct node *p)
{
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
struct node *end_insertion(struct node* head,int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
    ptr->data=data;
    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *five = (struct node *)malloc(sizeof(struct node));
    struct node *six = (struct node *)malloc(sizeof(struct node));
    struct node *sev = (struct node *)malloc(sizeof(struct node));
    struct node *eight = (struct node*) malloc(sizeof(struct node));


    head->data=11;
    head->next=second;

    second->data=13;
    second->next=third;

    third->data=21;
    third->next=fourth;

    fourth->data=27;
    fourth->next=five;

    five->data=31;
    five->next=six;

    six->data=41;
    six->next=sev;

    sev->data=15;
    sev->next=eight;

    eight->data=44;
    eight->next=NULL;

    printf("\nBEFORE INSERTION\n");
    printing(head);
    printf("\nAFTER END INSERTION\n");
    head=end_insertion(head,90);
    printing(head);
    return 0;    
}