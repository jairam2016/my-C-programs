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
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void printing(struct node *ptr)
{
    if(ptr != NULL)
    {
        printing(ptr->left);
        printf("\n");
        printf("%d\t",ptr->data);
        // printf("\n");
        printing(ptr->right);
        // printf("\n");
        //IN-ORDER
    }
}

void insert_node(struct node *ptr,int val)
{
    struct node *prev=ptr;//used for transversing through the code 
    while(ptr != NULL)
    {
        prev=ptr;
        if(val==ptr->data)
        {printf("\nNO!!! THE VALUE IS ALREADY PRESENT IN THE BST\n");break;}

        else if(ptr->data<val)
        {ptr=ptr->right;}
        
        else
        {ptr=ptr->left;}
    }

    struct node *new=create_node(val);
    if(prev->data > val)
    {
        prev->left=new;
    }

    else
    {
        prev->right=new;
    }
}
int main()
{
    struct node *p=create_node(98);
    struct node *p1=create_node(97);
    struct node *p2=create_node(44);
    struct node *p3=create_node(77);
    struct node *p4=create_node(10);
    struct node *p5=create_node(60);
    struct node *p6=create_node(18);
    struct node *p7=create_node(28);
    struct node *p8=create_node(16);
    struct node *p9=create_node(4);

    p->left=p1;       p->right=p2;
    p1->left=p3;      p1->right=p4;
    p3->left=p5;      p3->right=p6;
    p2->left=p7;      p8->left=p9;
    p2->right=p8;

    printf("\nTREE BEFORE INSERTION\n");
    printing(p);
    insert_node(p,6);
    printf("\nAFTER INSERTION THE TREE LOOKS LIKE\n");
    printing(p);
}

