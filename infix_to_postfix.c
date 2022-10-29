#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
void push(struct stack *sp, char ch)
{
    sp->arr[++sp->top] = ch;
}
char pop(struct stack *sp)
{
    char ch = sp->arr[sp->top];
    sp->top--;
    return ch;
}
char stacktop(struct stack *sp)
{
    return sp->arr[sp->top];
}
int priority(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 5;
    }
    if (ch == '+' || ch == '-')
    {
        return 3;
    }
    return 0;
}
int isempty(struct stack *sp)
{
    if (sp->top == -1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 40;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char exp[100], x;
    printf("\nENTER THE EXPRESSION FOR POSTFIX\n");
    gets(exp);
    char *e = exp;
    while (*e != '\0')
    {
        if (isalnum(*e))
        {
            printf("%c", *e);
        }
        if (*e == '(')
        {
            push(sp, *e);
        }
        if (*e == ')')
        {
            while ((x = pop(sp)) != '(')
            {
                printf("%c", x);
            }
        }
        if (*e == '+' || *e == '-' || *e == '/' || *e == '*')
        {
            if (priority(stacktop(sp)) > priority(*e))
            {
                printf("%c", pop(sp));
            }
            push(sp,*e);
        }
        e++;
    }
    while (isempty(sp) != -1)
    {
        printf("%c", pop(sp));
    }
    return 0;
}