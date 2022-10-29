#include <stdio.h>
#include <stdlib.h>

int i, j, a, b, u, v, node, ne = 1;
int cost[900][900];
int parent[900];
int min, mincost = 0;

int find(int i)
{
    while(parent[i])
        i=parent[i];
    return i;    
}
int unison(int i, int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}

void main()
{
    printf("\nENTER THE NUMBER OF NODES IN THE GRAPH\t");
    scanf("%d", &node);
    printf("\nENTER THE COST ADJACENCY MATRIX OF THE GRAPH\n");
    for (i = 1; i <= node; i++)
    {
        //printf("\n");
        for (j = 1; j <= node; j++)
        {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
            {
                cost[i][j] = 999;
            }
        }
    }

    printf("\nTHE MINIMUM SPANNING TREE OF THE GRAPH IS:-\n");
    while (ne < node)
    {
        min=999;
        for (i = 1; i <= node; i++)
        {
            for (j = 1; j <= node; j++)
            {
                if (cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(unison(u,v))
        {
            printf("\n%d.EDGE(%d,%d)=%d",ne++,a,b,min);
            mincost+=min;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\nTHE MINIMUN COST=%d",mincost);
}