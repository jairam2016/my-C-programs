#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int val)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}

struct node *iterative_search_ops(struct node *ptr,int val)
{
    do
    {
        if(ptr->data==val)
        {
            return ptr;
        }
        else if(ptr->data < val)
        {
            ptr=ptr->right;
        }
        else
        {
            ptr=ptr->left;
        }
    }while(ptr != NULL);
    return NULL;
}
void printing(struct node *p)
{
    if(p != NULL)
    {
        printing(p->left);
        printf("%d\t",p->data);
        printing(p->right);
    }   
}

int main()
{
    struct node *p=create_node(17);
    struct node *p1=create_node(11);
    struct node *p2=create_node(18);
    struct node *p3=create_node(9);
    struct node *p4=create_node(16);
    struct node *p5=create_node(3);
    struct node *p6=create_node(27);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p3->left=p5;
    p3->right=NULL;
    p2->left=NULL;
    p2->right=p6;

    int search=3;
    struct node *d=iterative_search_ops(p,search);
    if(d != NULL)
    {
        printf("\nFOUND THE ELEMENT\n");
    }
    else
    {
        printf("\nELEMENT NOT FOUND\n");
    }
    printing(p);    
    return 0;
}