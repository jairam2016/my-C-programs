//THIS PROGRAM HELPS IN IMPLEMENTING ABSTRACT DATA TYPE THROUGH ARRAYS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct arrays_ADT
{
    int total_size;
    int used_sized;
    int *ptr;
};
void create_array(struct arrays_ADT *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_sized = usize;
    a->ptr = (int *)calloc(tsize, sizeof(int));
}
void setval(struct arrays_ADT *a)
{
    int n;
    for (int i = 0; i < a->used_sized; i++)
    {
        scanf("%d\n", &n);
        (*a).ptr[i] = n;
        printf("\n");
    }
}
void show(struct arrays_ADT *a)
{
    printf("the elements in array are\n");
    for (int i = 0; i < a->used_sized; i++)
    {
        printf("%d\n", a->ptr[i]);
    }
}
void main()
{
    struct arrays_ADT marks;
    create_array(&marks, 100, 10);
    setval(&marks);
    show(&marks);
}