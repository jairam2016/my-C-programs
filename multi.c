#include<stdio.h>
#include<math.h>
#include<string.h>
//in C languge MAIN method ko define karne se pehle function declarartion karna padega//
int multiply(int a, int b);
float divide(int a ,int b);
void star(int n);
int main()
{
    int a,b,n;
    printf("THE VALUE OF A IS:\n");
    scanf("%d",&a);
    printf("THE VALUE OF B IS:\n");
    scanf("%d",&b);
    printf("THE VALUE OF N IS:\n");
    scanf("%d",&n);
    int m=multiply(a,b);
    float f1=divide(a,b);
    star(n);
    printf("THE MULTIPLICATION VALUE IS: %d \n",m);
    printf("THE DIVIDE VALUE IS: %f\n",f1);
} 
int multiply(int a, int b)
{
    return (a*b);
}
float divide(int a, int b)
{
    float f=(float)a/b;
    return f;
}
void star(int n)
{
    int i,j;
    for(i=n;i>=-n;i--)
    {
        for(j=0;j<=abs(i);j++)
        {
            printf("  ");
        }
        for (int k =n; k>=abs(i); k--)
        {
            printf(" %d",k);
        }
        printf("\n");
    }
}