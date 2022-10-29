#include <stdio.h>
#include <stdlib.h>
//FOR CREATING LINKED LIST WE CREATE A NODE THAT CONSISTS OF A BASE ADRESS AND POINTER TO THE NEXT NODE
struct node
{
    int data;
    struct node *next;
};

void printing(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELEMENT IS %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    //DECLARARTION AND CREATION OF A NODES AT ONCE
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    //DECLARATION OF DATAS
    head->data = 5;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 16;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = NULL;

    //FOR PRINTING THE LINKED LIST WE WILL SEND THE BASE POINTER TO THE FUNCTION
    printing(head);
    return 0;
}
