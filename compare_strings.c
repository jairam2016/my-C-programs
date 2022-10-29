#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("\nENTER THE FIRST STRING: ");
    gets(str1);
    printf("\nENTER THE SECOND STRING: ");
    gets(str2);
    strlwr(str1);
    strlwr(str2);
    int i=0,j=0,cmp1=0,cmp2=0;
    while((str1[i] != '\0') && (str2[i] != '\0'))
    {
        cmp1=str1[j];
        cmp2=str2[j];
        if(cmp1 != cmp2)
        {
            printf("\nTHE STRINGS ARE NOT EQUAL.");
            return 0;
        }

        i++;
        cmp1=cmp2=0;
        j++;
    }
    printf("\nTHE STRINGS ARE EQUAL.");
    return 0;
}