#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[] = {65, 55, 52, 50, 44, 1, 78, 98, 54, 53, 22, 27, 38,45,21,789,888,909,505,111,202,114,1128,}, index_of_min, temp;
    int len = (sizeof(arr) / sizeof(int));
    for (int i = 0; i < len; i++)
    {
        index_of_min = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[index_of_min])
            {
                index_of_min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[index_of_min];
        arr[index_of_min] = temp;
    }

    for(int i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
    }
}