#include<stdio.h>
#include<stdlib.h>
void find_largest(int *ptr,int num)
{
    int max=0;
    for(int i=0;i<num;i++)
    {
        if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
    }
    *ptr=max;
}
int main()
{
    int arr[50],num,largest;
    printf("\nENTER THE SIZE OF THE ARRAY: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        printf("\nENTER THE VALUE OF %d INTEGER: ",(i+1));
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    find_largest(ptr,num);
    printf("\nTHE LARGEST ELEMENT OF THE ARRAY IS %d",*ptr);
    return 0;
}