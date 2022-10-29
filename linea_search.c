#include<stdio.h>
#include<stdlib.h>
int linear_search(int arr[],int size,int element)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        {
           return (i+1);
        }
    }
    return -1;
}
void main()
{
    int arr[]={1,5,9,10,11,14,15,17,21,31,51,111};
    int size=sizeof(arr)/sizeof(int);
    int element=77;
    int d=linear_search(arr,size,element);
    if(d!=-1)
    {
        printf("ELEMENT FOUND AT %d",(d));
    }
    else
    {
        printf("ELEMENT NOT FOUND");
    }
}