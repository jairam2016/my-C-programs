#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct stack
{
    int size;
    int top;
    float *arr;
};
void push(struct stack *sp, float ch)
{
    sp->arr[++sp->top] = ch;
}
float pop(struct stack *sp)
{
    float ch = sp->arr[sp->top];
    sp->top--;
    return ch;
}
float stacktop(struct stack *sp)
{
    return sp->arr[sp->top];
}
void main()
{
    char postfix[20];
    int i=0;float val;
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=40;
    sp->top=-1;
    float op1,op2;
    sp->arr=(float*)malloc(sp->size*sizeof(float));
    printf("\nENTER THE POSTFIX EXPRESSION\n");
    gets(postfix);
    while(postfix[i]!='\0')
    {
        if(isdigit(postfix[i]))
        {
            push(sp,postfix[i]-'0');
        }
        if(isalpha(postfix[i]))
        {
            printf("\nENTER THE VALUE OF %c",postfix[i]);
            scanf("%f",&val);
            push(sp,val);
        }
        if(postfix[i]=='+'||postfix[i]=='*'||postfix[i]=='/'||postfix[i]=='-')
        {
            op2=pop(sp);
            op1=pop(sp);
            float div=(float)op1/op2;
            float multi=(float)op1*op2;
            switch(postfix[i])
            {
                case '+': push(sp,(op1+op2));break;
                case '-': push(sp,op2-op1);break;
                case '*': push(sp,multi);break;
                case '/': push(sp,div);break;
            }
        }
        i++;
    }
    printf("THE RESULT IS %f",stacktop(sp));
}