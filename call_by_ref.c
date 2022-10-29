#include<stdio.h>
#include<stdlib.h>
void addition(int *a,int *b,int *s)
{
    *s=*a+*b; 
}
void substraction(int *a,int *b,int *s)
{
    *s=*a-*b; 
}
void main()
{
    int s=0;
    int a,b;
    printf("\nENTER THE FIRST NUMBER:");
    scanf("%d",&a);
    printf("\nENTER THE SECOND NUMBER:");
    scanf("%d",&b);
    addition(&a,&b,&s);
    printf("\nTHE RESULT OF ADDITION IS:%d",s);
    substraction(&a,&b,&s);
    printf("\nTHE RESULT OF SUBSTRACTION IS:%d",s);
}