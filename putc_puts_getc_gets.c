#include<stdio.h>
void main()
{
    FILE *ptr=NULL;
    char str[20]=" JAI RAM NITR.";
    char s[20];
    ptr=fopen("jairam.txt","r");//IMPORTANT TO CHANGE THE MODE ACCORDINGLY 
    fputc('A',ptr);

    fputs(str,ptr);
    
    char c=fgetc(ptr);
    printf("\nTHE CHARACTER IS %c",c);

    fgets(s,7,ptr);
    printf("\nSTRING READ IS %s",s);
}