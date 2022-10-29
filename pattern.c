#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{

    int n,inn;
    int original=n;
    scanf("%d", &n);
  	n=n*2;
    for (int row=0; row<=n; row++) 
    {
        for (int col=0; col<=n; col++)
        {
         inn=original-min(min(row,col),(min(n-row,n-col)));
        }
    }
    return 0;
}
