#include<stdio.h>
#include<stdlib.h>
int sum(int *ptr,int n);
int main()
{
    int n;
    printf("\n THE SIZE ARRAY U WANT:\t");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n ENTER THE VALUE OF %d ELEMENT\t",(i+1));
        scanf("%d",&a[i]);
    }
    int d=sum(a,n);
    printf("the sum is:%d",d);

    return 0;
}
int sum(int *ptr,int n)
{
    int s=0;
    for ( int i = 0; i <n; i++)
    {
        s=s+*(ptr+i);
    }
    return s;
}