#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    int i=0;
    printf("\nENTER THE STRING:");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    while(str1[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            printf("\nTHE STRINGS ARE NOT EQUAL");
            exit(0);
        }
        i++;
    }
    printf("\nTHE STRINGS ARE EQUAL");
}