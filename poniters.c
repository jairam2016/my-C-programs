#include<stdio.h>
#include<stdlib.h>
void add(int *a,int *b);
void substract(int *a,int *b);
int main()
{
    int a,b;
    printf("\n ENTER TWO NUMBERS :\t");
    scanf("%d",&a);
    scanf("%d",&b);
    add(&a,&b);
    substract(&a,&b);
    printf("\n THE SUM OF TWO NUMBERS IS:\t%d",a);
    printf("\nTHE DIFF OF TWO NUMBERS IS:\t%d",b);
    return 0;
}
void add(int *a,int *b)
{
    *a=*a+*b;

}
void substract(int *a,int *b)
{
    *b=*a-2*(*b);
    
}