#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *ptr;
struct node *temp;
int c=0;
void insertion(int val)
{
    if(c==0)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=val;
        ptr->next=NULL;
        c=c+1;
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        temp->next=ptr;
        ptr=temp;
    }
}
void sorting()
{
    struct node *p=ptr;
    struct node *q;
    int temp;
    while(p!=NULL)
    {
        q=p->next;
        while(q != NULL)
        {
            if(p->data > q->data)
            {
                temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->next;
        }
        p=p->next;
    }
}
void display()
{
    struct node *qtr=ptr;
    while(qtr != NULL)
    {
        printf("%d\t",qtr->data);
        qtr=qtr->next;
    }
}
int main()
{
    int ch,val;
    do
    {
        printf("\n1.INSERTION");
        printf("\n2.DISPLAY");
        printf("\n3.EXIT");
        printf("\nENTER YOUR CHOICE\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("\nENTER THE VALUE OF ELEMENT:");
                    scanf("%d",&val);
                    insertion(val);
                    break;

            case 2:
                    printf("\nTHE ELEMENTS IN THE LIST ARE:\n");
                    sorting();
                    display();
                    break;

            case 3:
                    exit(4);
        }
    }while(ch!=3);
    return 0;
}