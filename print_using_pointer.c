#include<stdio.h>
#include<stdlib.h>
void print_elements(int *ptr,int num)
{
    for(int i=0;i<num;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}
void main()
{
    int arr[50],num;
    int *ptr=arr;
    printf("\nENTER THE SIZE OF THE ARRAY: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        printf("\nENTER THE VALUE OF %d INTEGER: ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("\nTHE ELEMENTS IN ARRAY ARE:\n");
    print_elements(ptr,num);
}