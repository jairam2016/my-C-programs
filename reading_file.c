#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[50]="JAI RAM IS A BOY AND HE IS GOOD";
    FILE *ptr=NULL;
    ptr=fopen("jairam.txt","r");
    fscanf(ptr,"%s",str);
    printf("%s",str);
}