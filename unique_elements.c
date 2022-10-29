#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num,arr[50],count;
    printf("\nENTER THE SIZE OF THE ARRAY: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        printf("\nENTER THE VALUE OF %d INTEGER: ",(i+1));
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        count=1;
        for(int j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                count=count+1;
                arr[j]='/';
            }
        }
        if(arr[i]!='/')
        {
            printf("\nTHE OCCURANCE OF %d IS %d",arr[i],count);
        }
    }
}