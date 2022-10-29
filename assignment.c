#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* insert_at_front(struct node *head)
{
    
}
int main()
{
    struct node *head_ptr=(struct node*)malloc(sizeof(struct node));
    int choice;
    do
    {
        printf("\n1.INSERT AT THE BEGINNING: ");
        printf("\n2.SERACH THE ELEMENT: ");
        printf("\n3.PRINT THE LIST: ");
        printf("\n4.EXIT THE PROGRAM");
        printf("\nENTER YOUR CHOICE PLEASE: ");
        cin>>choice;

        if(choice==1)
        {
            head_ptr=insert_at_front(head);
        }
    }
}