#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void insert_beginning(int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    if(head->next==NULL)
    {
        temp->next=temp;
        head=temp;
    }
    else
    {
        head->next=temp;;
        temp->next=head;
        head=temp;
    }
}
void insert_specific(int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    if(head==NULL)
    {
        head=temp;
        head->next=head;
    }
    int search;
    printf("\nENTER THE ELEMENT VALUE AFTER WHICH YOU WANT TO ENTER THE NODE: ");
    scanf("%d",&search);
    temp=(struct node*)malloc(sizeof(struct node));
    struct node *a=head;
    struct node *b=head->next;
    while(a->data!=search)
    {
        a=a->next;
        b=b->next;
    }
    if(a->data!=search)
    {
        printf("\nELEMENT NOT FOUND");
    }
    else
    {
        temp->data=val;
        a->next=temp;
        temp->next=b;
    }
}
void insert_end(int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    if(head==NULL)
    {
        temp=head;
        head->next=head;
    }
    else
    {
        struct node *p=head;
        while(p->next!=head)
        {
            p=p->next;
        }
        p->next=temp;
        temp->next=head;
    }
}
int delete_first()
{
    struct node *q=head;
    head=head->next;
    int val=q->data;
    free(q);
    return val;
}
int delete_last()
{
   struct node *q=head;
   struct node *p=head->next;
   while(p->next!=head)
   {
       p=p->next;
       q=q->next;
   }
   int val=p->data;
   free(p);
   q->next=head;
   return val;
}
int delete_particular()
{
    int search,val;
    struct node *p=head;
    struct node *q=head->next;
    printf("\nDATA VALUE TO BE DELETED:");
    scanf("%d",&search);
    while(q->next!=head)
    {
        if(q->data==search)
        {
             val=q->data;
             q=q->next;
             p->next=q;
        }
        q=q->next;
        p=p->next;
    }
    return val;
 }
 void display_list()
{
    struct node *q=head;
    while(q != NULL)
    {
        printf("%d\t",q->data);
        q=q->next;
    }
}
void main()
{
    head=NULL;
    int val,ch,del,ch1;
    do
    {
        printf("\n1.INSERTION IN LINKED LIST");
        printf("\n2.DELETION IN LINKED LIST");
        printf("\n3.DISPLAY IN LINKED LIST");
        printf("\n4.EXIT");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("\nVALUE OF THE ELEMENT: ");
                    scanf("%d",&val);
                    printf("\n1.BEGINNING OF THE LINKED LIST");
                    printf("\n2.END OF THE LINKED LIST");
                    printf("\n3.SPECIFIC NODE OF THE LINKED LIST\n");
                    scanf("%d",&ch1);
                    if(ch1==1)
                        insert_beginning(val);
                               

                    else if(ch1==2)
                        insert_end(val);
                        

                    else if(ch1==3)
                        insert_specific(val);
                                                      
                    break;

            case 2:
                    printf("\n1.DELETE THE FIRST NODE");
                    printf("\n2.DELETE THE LAST NODE");
                    printf("\n3.DELETE PARTICULAR NODE");
                    printf("\nENTER YOUR CHOICE");
                    scanf("\n%d",&ch1);
                    if(ch1==1)
                                del=delete_first();
                    if(ch1==2)
                                del=delete_last();
                    if(ch1==3)
                                del=delete_particular();                      
                     printf("\nDELETED NODE VALUE IS %d",del);
                     
                    break;

            case 3:
                    printf("\nTHE CONTENTS OF THE LINKED LIST IS\n");
                    display_list();
                    break;

            case 4:
                    exit(4);                

        }
    }while(ch!=4);
}