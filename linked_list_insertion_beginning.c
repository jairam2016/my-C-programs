#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printing(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
struct node* insertion_beginning(struct node *head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    ptr->data=data;

    ptr->next=head;

    head=ptr; 
    return head;

}
void main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *five = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 27;
    second->next = third;

    third->data = 37;
    third->next = fourth;

    fourth->data = 47;
    fourth->next = five;

    five->data = 77;
    five->next = NULL;
    
    printf("\nBEFORE INSERTION\n");
    printing(head);
    printf("\nAFTER INSERTION\n");
    head=insertion_beginning(head, 33);
    printing(head);
}