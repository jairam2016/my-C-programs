#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    printf("THE NAME OF 1ST BOY:\n");
    gets(str1);
    printf("THE NAME OF 2ND BOY:\n");
    gets(str2);
    puts(strcat(str1,str2));
    printf("%d",strlen(str1));
    puts(strrev(str2));
    printf("%d",strcmp(str1,str2));
}