//MAINLY USED FOR CALLBACK FUNCTIONS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum(int a, int b)
{
    return a + b;
}
int area(int a, int b)
{
    return a * b;
}
void executeGM(int (*ptr)(int, int))
{
    printf("HELLO WORLD\n");
    printf("the sum is %d", ptr(8, 15));
}
void area_of_rectangle(int (*fptr)(int, int))
{
    printf("\nTHE AREA OF RECTANGLE IS %d\t", fptr(5, 15));
}
void main()
{
    int (*ptr)(int, int);
    int (*fptr)(int, int);
    ptr = &sum;
    fptr = &area;
    int d = (*ptr)(8, 4);
    printf("%d\n", d);
    executeGM(ptr);
    area_of_rectangle(fptr);
}