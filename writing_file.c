#include<stdio.h>
void main()
{
    FILE *ptr=NULL;
    char str[500]="I LEARNT FROM YOU TUBE VIDEOS AND I PLAY CRICKET AND FOOTBALL";
    ptr=fopen("jairam.txt","w");
    fprintf(ptr,"%s",str);
}