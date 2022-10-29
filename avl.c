#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int Height;
};
int height(struct node *n)
{
    int lh, rh;
    if (n == NULL)
    {
        return 0;
    }
    //FOR LEFT SUBTREE
    if (n->left == NULL)
    {
        lh = 0;
    }
    else
    {
        lh = n->left->Height + 1;
    }
    //FOR RIGHT SUBTREE
    if (n->right == NULL)
    {
        rh = 0;
    }
    else
    {
        rh = n->right->Height + 1;
    }
    if (lh > rh)
        return lh;
    else
    {
        return rh;
    }
}

struct node *rotate_right(struct node *root)
{
    struct node *temp;
    temp = root->left;
    root->left = temp->right;
    temp->right = root;

    temp->Height = height(temp);
    root->Height = height(root);

    return temp;
}

struct node *rotate_left(struct node *root)
{
    struct node *temp;
    temp = root->right;
    root->right = temp->left;
    temp->left = root;

    root->Height = height(root);
    temp->Height = height(temp);

    return temp;
}

struct node *RR(struct node *n)
{
    n = rotate_left(n);
    return n;
}

struct node *RL(struct node *n)
{
    n->right = rotate_right(n->right);
    n = rotate_left(n);
    return n;
}

struct node *LL(struct node *n)
{
    n = rotate_right(n);
    return n;
}

struct node *LR(struct node *n)
{
    n->left = rotate_left(n->left);
    n = rotate_right(n);
    return n;
}

int balance_factor(struct node *n)
{
    int lh, rh;
    if (n == NULL)
    {
        return 0;
    }

    if (n->left == NULL)
    {
        lh = 0;
    }
    else
    {
        lh = n->left->Height + 1;
    }

    if (n->right == NULL)
    {
        rh = 0;
    }
    else
    {
        rh = n->right->Height + 1;
    }

    return (lh - rh);
}

struct node *find_min(struct node *root)
{
    if (root->left != NULL)
    {
        root = find_min(root->left);
    }
    return root;
}

struct node *create(struct node *n, int val)
{
    if (n == NULL)
    {
        n = (struct node *)malloc(sizeof(struct node));
        n->data = val;
        n->left = NULL;
        n->right = NULL;
    }
    if (val > n->data)
    {
        n->right = create(n->right, val);
        if (balance_factor(n) == -2)
        {
            if (val > n->right->data)
            {
                n = RR(n);
            }
            else
            {
                n = RL(n);
            }
        }
    }

    if (val < n->data)
    {
        n->left = create(n->left, val);
        if (balance_factor(n) == 2)
        {
            if (val > n->left->data)
            {
                n = LR(n);
            }
            else
            {
                n = LL(n);
            }
        }
    }
    n->Height = height(n);
    return n;
}

struct node *delete (struct node *root, int data)
{
    if (root == NULL)
        return root;
    // If the key to be deleted is smaller than the root's key,
    if (data < root->data)
        root->left = delete (root->left, data);
    // If the key to be deleted is greater than the root's key,
    else if (data > root->data)
        root->right = delete (root->right, data);
    else
    {
        // node with only one child or no child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        // node with two children:
        struct node *temp = find_min(root->right);
        // Copy the inorder successor's content to this node
        root->data = temp->data;
        // Delete the inorder successor
        root->right = delete (root->right, temp->data);
    }
    return root;
}

void *printing_in_order(struct node *n)
{
    if (n != NULL)
    {
        printing_in_order(n->left);
        printf("%d\t", n->data);
        printing_in_order(n->right);
    }
}
int main()
{
    struct node *root=NULL;
    int n, x, val, operation;
    do
    {
        printf("\n1.CREATE\n");
        printf("\n2.INSERT\n");
        printf("\n3.DELETE\n");
        printf("\n4.PRINT\n");
        printf("\n5.QUIT\n");
        printf("\nWHAT DO YOU WANT TO DO\n");
        scanf("\t%d", &operation);
        switch (operation)
        {
        case 1:
            printf("\nHOW MANY NODES DO YOU WANT TO CRAETE ?\t");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("\nTHE VALUE OF NODE %d\t", (i + 1));
                scanf("%d", &x);
                root = create(root, x);
            }
            break;

        case 2:
            printf("\nVALUE THAT YOU WANT TO ENTER\t");
            scanf("%d", &val);
            root = create(root, val);
            break;

        case 3:
            printf("\nELEMENT THAT YOU WANT TO DELETE\t");
            scanf("%d", &val);
            delete (root, val);
            break;

        case 4:
            printing_in_order(root);
            break;

            default:
            printf("\nWRONG OPERATIONAL VALUE ENTERED\n");
        }
    } while (operation != 5);
    return 0;
}
