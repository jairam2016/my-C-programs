#include<stdio.h>
#include<stdlib.h>
void printing(int arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\t",arr[i]);
    }  
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    int temp;

    do
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);

    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void quicksort(int arr[],int low,int high)
{
    int partition_index;
    if(low<high)
    {
    partition_index=partition(arr,low,high);
    quicksort(arr,low,partition_index-1);
    quicksort(arr,partition_index+1,high);
    }
}
int main()
{
    int arr[]={78,45,88,32,66,54,59,50,44,5,88,99,43,41,33,12,13,18,17};
    int len=(sizeof(arr)/sizeof(int));
    printf("ARRAY BEFORE SORTING\n");
    printing(arr,len);
    quicksort(arr,0,len-1);
    printf("\nARRAY AFTER QUICK SORTING\n");
    printing(arr,len);
    return 0;
}