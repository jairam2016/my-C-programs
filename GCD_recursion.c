#include<stdio.h>
#include<stdlib.h>
int GCD(int a,int b)
{
    if(a==b)
    return a;

    if(a>b)
    return GCD(a-b,b);

    if(a<b)
    return GCD(b,a);
}
void main()
{
    int a,b;
    printf("\nENTER TWO NUMBERS TO FIND GCD\n");
    scanf("%d\t%d",&a,&b);
    int divisor=GCD(a,b);
    printf("THE GCD IS %d",divisor);
}