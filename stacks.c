#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int is_full(struct stack *ptr)
{
    if (ptr->top == (ptr->size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_empty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop(struct stack *ptr)
{
    int val = ptr->arr[ptr->top];
    ptr->top = (ptr->top)-1;
    return val;
}

void push(struct stack *ptr)
{
    int val;
    ptr->top = ptr->top + 1;
    printf("\nENTER THE VALUE OF THE ELEMENT\n");
    scanf("%d", &val);
    ptr->arr[ptr->top] = val;
}
void main()
{
    char ch;
    int c=0;
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * (sizeof(int)));
    do
    {
        if (is_full(sp))
        {
            printf("\nTHE STACK IS FULL: STACK OVERFLOW\n");
            printf("THE VALUE REMOVED FROM STACK IS \t%d", pop(sp));
        }
        if (is_empty(sp))
        {
            printf("\nSTACK UNDERFLOW\n");
            printf("DO YOU WANT TO ADD ANY VALUES PRESS 'y' OR 'n' ??");
            scanf("%c", &ch);
            if (ch == 'y')
            {
                push(sp);
            }
            else
            {
                printf("the code has ended");
            }
        }
        else
        {
            push(sp);
        }
        c++;
    }while(c!=15);
}