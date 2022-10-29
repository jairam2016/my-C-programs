#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void slice(char *ptr,int length);
void main()
{
    char str[50];
    printf("\nENTER THE STRING:");
    gets(str);
    int len=strlen(str);
    char *ptr=str;
    slice(ptr,len);
    puts(str);
}
void slice(char *ptr,int length)
{
    int m,n,j=0;
    printf("\nENTER THE START INDEX:");
    scanf("%d",&m);
    printf("\nENTER THE END INDEX:");
    scanf("%d",&n);
    for(int i=m;i<=n;i++)
    {
        *(ptr+j)=*(ptr+i);
        j++;
    }
    *(ptr+j)='\0';
}