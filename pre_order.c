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

void printing(struct node *p)
{
    if(p != NULL)
    {
        printf("%d\t",p->data);
        printing(p->left);
        printing(p->right);
    }   
}
void main()
{
    struct node *p=create_node(12);
    struct node *p1=create_node(14);
    struct node *p2=create_node(18);
    struct node *p3=create_node(22);
    struct node *p4=create_node(26);
    struct node *p5=create_node(30);
    struct node *p6=create_node(27);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p3->left=p5;
    p3->right=NULL;
    p2->left=NULL;
    p2->right=p6;

    printing(p);
}