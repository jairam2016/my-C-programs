#include<stdio.h>
int main()
{
    int a,b,s;
    printf("ENTER THE VALUE OF A \n ");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B \n ");
    scanf("%d",&b);
    s=a+b;
    printf("THE SUM OF %d and %d is %d \n",a,b,s);
    printf("the value a&b is %d \n",(a&b));
    printf("the value of a|b is %d \n",(a|b));
    printf("the value of a^b is %d \n",(a^b));
    return 0; 
}
