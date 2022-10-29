#include<stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("\nWHICH TERM OF FIBONACCI SERIES DO YOU WANT:\t");
    scanf("%d",&n);
    printf("\nTHE TERM IS :\t %d",fibo(n));
    return 0  ;
}
int fibo(int n)
{
    int f1;
    if(n==1 || n==2)
    {
        return (n-1);
    }
    else
    {
        f1= (fibo(n-1)+fibo(n-2));
    }
    return f1;
}