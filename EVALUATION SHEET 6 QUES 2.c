/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//ROLL NO.- 721MM1046 (K JAI RAM)
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\nENTER THE VALUE OF FIRST INTEGER:");
    scanf("%d",&a);
    printf("\nENTER THE VALUE OF SECOND INTEGER:");
    scanf("%d",&b);
    printf("\nENTER THE VALUE OF THIRD INTEGER:");
    scanf("%d",&c);
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;
    if(*ptr1>*ptr2)
    {
        if(*ptr1>*ptr3)
        {
            printf("\nTHE HIGHEST VALUE AMONG %d,%d and %d is:%d",*ptr1,*ptr2,*ptr3,*ptr1);
        }
    }
    if(*ptr2>*ptr1)
    {
        if(*ptr2>*ptr3)
        {
            printf("\nTHE HIGHEST VALUE AMONG %d,%d and %d is:%d",*ptr1,*ptr2,*ptr3,*ptr2);
        }
    }
    if(*ptr3>*ptr2)
    {
        if(*ptr3>*ptr1)
        {
            printf("\nTHE HIGHEST VALUE AMONG %d,%d and %d is:%d",*ptr1,*ptr2,*ptr3,*ptr3);
        }
    }
    return 0;
}
