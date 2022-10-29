#include <stdio.h>
#include <stdlib.h>
void reverse(int *ptr, int n);
void main()
{
    int n;
    printf("\nTHE SIZE ARRAY U WANT:\t");
    scanf("%d", &n);
    int a[n];
    int *ptr = a;
    for (int i = 0; i < n; i++)
    {
        printf("\nENTER THE VALUE OF %d ELEMENT\t", (i + 1));
        scanf("%d", &a[i]);
    }
    reverse(ptr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
}
void reverse(int *ptr, int n)
{
    int *first = ptr;
    int *last = ptr + n - 1;
    while (first < last)
    {
        int temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
}