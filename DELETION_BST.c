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
        printf("%d\t",ptr->data);
        printing(ptr->right);
        //IN-ORDER
    }
}
struct node *find_min(struct node *root)
{
    if(root->left != NULL)
    {
        root->left=find_min(root->left);
    }
    return root;
}
struct node *delete_node(struct node *root,int val)
{
    if(root==NULL)
    {
        printf("\nNOTHING TO PRINT\n");
    }
    else if(root->data > val)
    {
        root->left=delete_node(root->left,val);
    }
    else if(root->data < val)
    {
        root->right=delete_node(root->right,val);
    }
    else
    {   
        if(root->left == NULL && root->right== NULL)
        {
            root=root->left;
            free(root);
        }
        else if(root->left==NULL)
        {
            struct node *temp=root;
            root=root->right;
            free(temp);
        }
        else if(root->right==NULL)
        {
            struct node *temp=root;
            root=root->left;
            free(temp);
        }

        else
        {
            //WHEN THERE ARE TWO CHILD
            struct node *temp=find_min(root->right);
            root->data=temp->data;
            root->right=delete_node(root->right,temp->data);
        }
    }
    return root;
}
int main()
{
    struct node *p=create_node(98);
    struct node *p1=create_node(9);
    struct node *p2=create_node(44);
    struct node *p3=create_node(71);
    struct node *p4=create_node(50);
    struct node *p5=create_node(6);
    struct node *p6=create_node(89);
    struct node *p7=create_node(87);
    struct node *p8=create_node(66);
    struct node *p9=create_node(55);

    p->left=p1;       p->right=p2;
    p1->left=p3;      p1->right=p4;
    p3->left=p5;      p3->right=p6;
    p2->left=p7;      p8->left=p9;
    p2->right=p8;

    printf("\nTREE BEFORE DELETION\n");
    printing(p);
    delete_node(p,98);
    printf("\nAFTER DELETION THE TREE LOOKS LIKE\n");
    printing(p);
    return 0;
}
