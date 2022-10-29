#include <stdio.h>
#include <stdlib.h>
int binary_search(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid]==element)
        {
            return mid+1;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 9, 10, 15, 17, 21, 29, 30, 37, 44, 54, 56, 61, 67, 69, 71, 74, 79, 81, 83, 84, 88, 91, 93, 94, 95, 99, 100};
    int size = sizeof(arr) / sizeof(int);
    int element = 55;
    int d = binary_search(arr, size, element);
    if(d!=-1)
    {
        printf("ELEMENT IS FOUND AT POSITION %d",d);
    }
    else
    {
        printf("ELEMENT NOT FOUND");
    }
    return 0;
}