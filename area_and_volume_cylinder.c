#include<stdio.h>
#include<stdlib.h>
void main()
{
    float rad,height,area,vol;
    printf("\nENTER THE VALUE OF RADIUS ");
    scanf("%f",&rad);
    printf("\nENTER THE VALUE OF HEIGHT ");
    scanf("%f",&height);
    area=3.14*rad*rad;
    printf("\nTHE AREA OF CIRCLE IS %f",area);
    vol=area*height;
    printf("\nTHE VOLUME OF THE CYLINDER IS %f",vol);
}