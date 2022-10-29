#include<bits/stdc++.h>
using namespace std;
struct stack
{
    int size;
    int top;
    int *arr;
};
bool is_full(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
bool is_empty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;
}
int pop(struct stack *ptr)
{
    int val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
}
void push(struct stack *ptr)
{
    int val;
    ptr->top++;
    cin>>val;
    ptr->arr[ptr->top]=val;
}
int main()
{
    int c=0;
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    do
    {
        if(is_full(sp))
        {
            cout<<"\nSTACK OVERFLOW";
            cout<<"\nTHE VALUE REMOVED FROM STACK IS "<<pop(sp);
        }
        if(is_empty(sp))
        {
            cout<<"\nSTACK UNDERFLOW";
            cout<<"\nENTER ELEMENT IN STACK:";
            push(sp);
        }
        c++;
    }while(c!=10);
    return 0;
}