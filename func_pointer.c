#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float distance(int a, int b, int c, int d)
{
    float dist = sqrt((pow((a - b), 2)) + (pow((c - d), 2)));
    return dist;
}
void areaofcircle(float (*ptr)(int, int, int, int))
{
    int a,b,c,d;
    printf("THE VALUE OF A IS \n");
    scanf("%d",&a);
    printf("THE VALUE OF B IS \n");
    scanf("%d",&b);
    printf("THE VALUE OF C IS \n");
    scanf("%d",&c);
    printf("THE VALUE OF D IS \n");
    scanf("%d",&d);
    float d1=(*ptr) (a,b,c,d);
    printf("DISTANCE IS %f\t",d1);
    float area=3.14*d1*d1;
    printf("\nAREA OF CIRCLE IS \t%f",area);
}
void main()
{
    float (*ptr)(int, int, int, int);
    ptr = &distance;
    areaofcircle(ptr);
}