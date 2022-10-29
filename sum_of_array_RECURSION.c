#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int array_sum(int arr[10],int n)
{
    if(n==1)
        return arr[0];
    else
    {
        return array_sum(arr,n-1)+arr[n-1];
    }
}
void main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=(sizeof(arr)/sizeof(int));
    printf("\nTHE SUM OF ARRAY IS %d",array_sum(arr,size));
}