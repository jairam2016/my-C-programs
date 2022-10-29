#include <stdio.h>
#include <stdlib.h>
void tower_of_hanoi(int n, char source, char temp, char dest)
{
    source='s';
    temp='t';
    dest='d';
    if (n == 1)
    {
        printf("\nMOVED %d DISC FROM %c TO %c ", n, source, dest);
    }
    else
    {
        tower_of_hanoi(n - 1, source, temp, dest);
        printf("\nMOVED %d DISC FROM %c TO %c ", n, source, dest);
        tower_of_hanoi(n - 1, temp, dest, source);
    }
}
int main()
{
    int n;
    char source='s', temp='t', dest='d';
    printf("\nENTER THE NO OF DISCS IN THE TOWER\t");
    scanf("%d", &n);
    tower_of_hanoi(n, source, temp, dest);
    return 0;
}