#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[500],b[500],c[200],d[200];
    int i=0,j=0,l;
    printf("\nENTER A LONG STRING: ");
    gets(a);
    printf("\nENTER A STRING WHICH WILL BE REPLACED: ");
    gets(b);
    printf("\nENTER THE WORD TO BE REPLACED WITH: ");
    gets(c);
    l=strlen(a);
    while(l>=0)
    {
        if(a[i] != ' ')
        {
            d[j]=a[i];
            j++;
        }

        if(a[i]==' ' || a[i]=='\0')
        {
            d[j]='\0';
            if(strcmp(b,d)==0)
            {
                printf("%s",c);
                printf(" ");
            }
            else
            {
                printf("%s",d);
                printf(" ");
            }
            j=0;
        }
        i++;
        l--;
    }
}
    
