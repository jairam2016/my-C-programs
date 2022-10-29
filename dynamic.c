#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int l,i=0;char *ptr;
    while (i<3)
    {
        printf("THE NAME LENGTH OF DRIVER %d",i+1);
        scanf("%d",&l);
        ptr=(char*)calloc(l+1,sizeof(char));
        printf("THE NAME OF DRIVER %d",(i+1));
        scanf("%s",&ptr);
        free(ptr);
        i++;
    }
    
}