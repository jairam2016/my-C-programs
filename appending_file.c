#include<stdio.h>
void main()
{
    FILE *ptr=NULL;
    char str[500]=".I STUDY METALLURGICAL ENGINEERING. I HATE IT ACTUALLY.";
    ptr=fopen("jairam.txt","a");
    fprintf(ptr,"%s",str);
}