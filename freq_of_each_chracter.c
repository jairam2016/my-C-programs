#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char ch[60];
    int i=0,k=0,j=0;
    printf("\nENTER A STRING:");
    gets(ch);
    strlwr(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ')
        {
            continue;
        }
        k=1;
        for(j=i+1;ch[j]!='\0';j++)
        {
            if(ch[i]==ch[j])
            {
                k++;
                ch[j]='/';
            }
        }
        if(ch[i]!='/')
        {
            printf("\n%c character has occured %d times",ch[i],k);
        }
    }
}