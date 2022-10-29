#include<stdio.h>
#include<stdlib.h>
void deletion(int arr[],int capacity,int usize,int index)
{
    for (int i = index; i < usize; i++)
    {
        arr[i]=arr[i+1];
    }
}
void display(int arr[],int usize)
{
    for (int i = 0; i < usize; i++)
    {
        printf("%d\t",arr[i]);
    }
}
void main()
{
    int arr[20]={7,9,11,15,16,19,78,88,94,96,99};
    int capacity=20;
    int usize=11;
    int index=3;
    printf("\nARRAY BEFORE INSERTION\n");
    display(arr, usize);
    deletion(arr,capacity,usize,index);
    usize=usize-1;
    printf("\nTHE ARRAY AFTER DELETION IS \n");
    display(arr,usize);
}