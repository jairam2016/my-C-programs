#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float p,r,t,ci;
    printf("ENTER THE PRINCIPAL AMOUNT\n");
    scanf("%f",&p);
     printf("ENTER THE RATE PERCENT\n");
    scanf("%f",&r);
     printf("ENTER THE TIME\n");
    scanf("%f",&t);
    ci=p*pow(((100+r)/100.0),t);
     printf("THE COMPOUND INTEREST IS:%f\n",ci);
}