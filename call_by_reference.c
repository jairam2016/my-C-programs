#include<stdio.h>
#include<stdlib.h>
void call_by_ref(int *a)
{
    int n=654;
    *a=n;
}
int main()
{
    int a=34;
    call_by_ref(&a);
    printf("%d \n",a);
    return 0;
}
