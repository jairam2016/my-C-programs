#include <stdio.h>
#include <stdlib.h>
void insertion(int arr[], int usize, int index, int element, int capacity)
{
    for (int i = usize; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}
void display(int arr[], int usize)
{
    for (int i = 0; i < usize; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void main()
{
    int arr[100] = {7, 8, 9, 10, 11, 15, 19, 21, 28, 33, 37, 45};
    int capacity = 100;
    int usize = 12;
    int index = 5;
    int element = 13;
    printf("\nARRAY BEFORE INSERTION\n");
    display(arr, usize);
    if(usize>=capacity)
    {
        printf("SORRY SIZE OF ARRAY HAS EXCEEDED\n");
    }
    else
    {
       insertion(arr, usize, index, element, capacity);
       usize=usize+1;
       printf("\nARRAY AFTER INSERTION\n");
       display(arr, usize);
    }   
}