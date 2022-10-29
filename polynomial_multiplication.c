#include <stdio.h>
#include <stdlib.h>
struct node
{
  int coff;
  int pow;
  struct node *next;
};
struct node *ptr1;
struct node *ptr2;
struct node *result;
struct node *temp1;
struct node *temp2;
int c1 = 0, t = 0,t2=0, c2 = 0;
void enqueue()
{
  if (t == 0)
  {
    if (c1 == 0)
    {
      ptr1 = (struct node *)malloc(sizeof(struct node));
      ptr1->next = NULL;
      c1 = c1 + 1;
    }
    else
    {
      temp1 = (struct node *)malloc(sizeof(struct node));
      temp1->coff=ptr1->coff;
      temp1->pow=ptr1->pow;
      temp1->next = NULL;
      struct node *q = ptr1;
      while (q->next != NULL)
      {
        q = q->next;
      }
      q->next = temp1;
    }
    t = t + 1;
  }

  else
  {
    if (c2 == 0)
    {
      ptr2 = (struct node *)malloc(sizeof(struct node));
      ptr2->next = NULL;
      c2=c2+1;
    }
    else
    {
      temp2=(struct node*)malloc(sizeof(struct node));
      temp2->coff=ptr2->coff;
      temp2->pow=ptr2->pow;
      temp2->next=NULL;
      struct node *p=ptr2;
      while(p->next != NULL)
      {
        p=p->next;
      }
      p->next=temp2;
    }
  }
}

void multiply()
{
  struct node *first=ptr1;
  struct node *second=ptr2;
  for(first=ptr1;first!=NULL;first=first->next)
  {
    for(second=ptr2;second!=NULL;second=second->next)
    {
      result=result+add_term();
    }
  }
}

struct node* add_term()
{
  struct node *qtr=result;
  struct node *str=result;
  if(t2==0)
  {
    result->coff=ptr1->coff*ptr2->coff;
    result->pow=ptr1->pow+ptr2->pow;
    result->next=NULL;
    t2=t2+1;
  }
  else
  {
    struct node *temporary=(struct node*)malloc(sizeof(struct node));
    temporary->coff=ptr1->coff*ptr2->coff;
    temporary->pow=ptr1->pow+ptr2->pow;
    while(qtr->next!=NULL)
    {
      qtr=qtr->next;
    }
    qtr->next=temporary;
    temporary->next=NULL;
  }

  while(str->next!=NULL)
  {
    if(str->pow==ptr1->pow)
    {
      str->coff+=ptr1->coff*ptr2->coff;
    }
    str=str->next;
  }
  return result;
}

void display()
{
  while(result->next!=NULL)
  {
    printf("%d*X^%d+",result->coff,result->pow);
    result=result->next;
  }
}

void main()
{
  printf("\nCODE ON POLYNOMIAL MULTIPLICATION USING LINKED LIST\n");
  int n;
  printf("\nNO OF TERMS IN FIRST POLYNOMIAL\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    printf("\nENTER THE CO-EFFICIENT AND POWER OF %d TERM\n");
    scanf("%d   %d",&ptr1->coff,&ptr1->pow);
    enqueue();
  }

  printf("\nNO OF TERMS IN SECOND POLYNOMIAL\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    printf("\nENTER THE CO-EFFICIENT AND POWER OF %d TERM\n");
    scanf("%d   %d",&ptr2->coff,&ptr2->pow);
    enqueue();
  }

  multiply();
  printf("\nTHE RESULTANT POLYNOMIAL IS \n");
  display();

}