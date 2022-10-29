#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str[50];
    int len;
    printf("\nENTER THE STRING:");
    gets(str);
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        str[i]=str[i]+1;
    }
    puts(str);
}