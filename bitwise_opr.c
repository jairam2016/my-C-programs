#include <stdio.h>
#include <stdlib.h>
void cal_the_max(int n, int k)
{
    int maxAND = 0, maxOR = 0, maxXOR = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if(((i&j)>maxAND)&&((i&j)<k))
            {
                maxAND=(i&j);
            }
            if(((i|j)>maxOR)&&((i|j)<k))
            {
                maxOR=(i|j);
            }
            if(((i^j)>maxAND)&&((i^j)<k))
            {
                maxXOR=(i^j);
            }

        }
    }
    printf("%d  %d  %d",maxAND,maxOR,maxXOR);
}
int  main()
{
    int n, k;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &n);
    printf("THE THRESHOLD VALUE\n");
    scanf("%d", &k);
    cal_the_max(n, k);
    return 0;
}