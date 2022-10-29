#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str1[100],str2[100],str3[100],str4[100];
    int i=0,a=0;
    printf("\nENTER A LONG STRING:");
    gets(str1);
    printf("\nENTER THE WORD YOU WANT TO REPLACE:");
    gets(str2);
    printf("\nENTER THE WORD TO REPLACE WITH:");
    gets(str3);
    int len=strlen(str1);
    while(len>=0)
    {
        if(str1[i] != ' ')
        {
            str4[a]=str1[i];
            a++;
        }

        if(str1[i]==' ' || str1[i]=='\0')
        {
            str4[a]='\0';
            if(strcmp(str4,str2)==0)
            {
                printf("%s ",str3);
                a=0;
            }

            else
            {
                printf("%s ",str4);
                a=0;
            }
        }
        len--;
        i++;
    }
}  