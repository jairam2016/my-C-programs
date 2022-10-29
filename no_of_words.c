#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[500];
    printf("\nENETR A STRING TO FIND NUMBER OF WORDS: ");
    gets(str);
    int count=0;
    int i=0,j=0;
    while(str[i] != '\0')
    {
        if(str[j]==' ' || str[j]=='\0')
        {
            count=count+1;
        }
        i++;
        j++;
    }

    printf("\nTHE NUMBER OF WORDS IS: %d",++count);
}