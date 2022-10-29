#include <stdio.h>
#include <stdlib.h>
void printing(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int maximum(int arr[], int len)
{
    int max = 0;
    for (int i = 0; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void count_sort(int arr[], int len)
{
    int i1 = 0, j1 = 0;
    int max = maximum(arr, len);
    int *count = (int *)malloc(max * sizeof(int));

    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < len; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }

    while (i1 <= max)
    {
        while (count[i1] > 0)
        {
            arr[j1] = i1;
            count[i1] = count[i1] - 1;
            j1++;
        }
        i1++;
    }
}
void main()
{
    int arr[] = {88, 14, 78, 27, 29, 19, 10, 55, 12, 17, 17, 17, 17, 28, 39, 57, 32, 54, 99, 19, 65, 22, 27, 29};
    int len = (sizeof(arr) / sizeof(int));
    printf("\nBEFORE SORTING\n");
    printing(arr, len);
    printf("\nAFTER COUNT SORTING\n");
    count_sort(arr, len);
    printing(arr, len);
}