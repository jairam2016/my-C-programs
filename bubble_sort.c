#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[]={55,21,17,66,98,11,33,19,8,45},temp;
    int len=(sizeof(arr)/sizeof(int));
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("THE BUBBLE SORTED ARRAY IS\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}