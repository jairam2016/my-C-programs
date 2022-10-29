//INSERTION SORT
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[]={56,50,51,48,49,33,21,37,44,9,1,78,65,100,504,11,187,198,210};
    int len=(sizeof(arr)/sizeof(int));
    for(int i=1;i<len;i++)
    {
        int key,j;
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    //PRINTING THE ARRAY AFTER SORTING
    for(int i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
    }
}