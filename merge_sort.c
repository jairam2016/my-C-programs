#include <stdio.h>
#include <stdlib.h>

void printing(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void merge(int arr[], int mid, int low, int high)
{
    int i, j, k, brr[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            brr[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        brr[k] = arr[i];
        k++;
        i++;
    }

    while (j <= high)
    {
        brr[k] = arr[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = brr[i];
    }
}
void mergesort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}
void main()
{
    int arr[] = {78, 91, 45, 33, 66, 64, 7, 8, 9, 14, 100, 44, 46, 75, 88, 13, 17};
    int len = (sizeof(arr) / sizeof(int));
    printf("\nARRAY BEFORE SORTING\n");
    printing(arr, len);
    printf("\nARRAY AFTER MERGE SORTING\n");
    mergesort(arr, 0, len - 1);
    printing(arr, len);
}