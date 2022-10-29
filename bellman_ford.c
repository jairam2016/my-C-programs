#include<stdlib.h>
#include<stdio.h>

int bellman_ford(int cost[200][200],int edge[200][2],int node,int k)
{
    int parent[200],src,distance[200],u,v,flag=1;
    for(int i=0;i<node;i++)
    {
        distance[i]=999;
        parent[i]=-1;
    }

    printf("\nENTER THE SOURCE VERTEX\n");
    scanf("%d",&src);

    distance[src-1]=0;
    for(int i=0;i<node-1;i++)
    {
        for(int j=0;j<k;j++)
        {
            u=edge[j][0];
            v=edge[j][1];
            if(distance[u]+cost[u][v]<distance[v])
            {
                distance[v]=distance[u]+cost[u][v];
                parent[v]=u;
            }
        }
    }

    for(int j=0;j<node;j++)
    {
         u=edge[j][0];
         v=edge[j][1];
        if(distance[u]+cost[u][v]<distance[v])
        {
            flag=0;
        }
    }

    if(flag)
    {
        for(int i=0;i<node;i++)
        {
            printf("\nVERTEX %d TO PARENT %d COST IS %d\n",i+1,parent[i]+1,distance[i]);
        }
    }

    return flag;
}

int main()
{
    int cost[200][200],edge[200][2],node,k=0;
    printf("\nENTER THE SIZE OF THE GRAPH\n");
    scanf("%d",&node);
    printf("\nENTER THE COST ADJACENCY MATRIX\n");
    for(int i=0;i<node;i++)
    {
        for(int j=0;j<node;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]!=0)
            {
                edge[k][0]=i;
                edge[k][1]=j;
                k++;
            }
        }
    }

    if(bellman_ford(cost,edge,node,k))
    {
        printf("\nNO NEGATIVE CYCLE OCCURED\n");
    }
    else
    {
        printf("\nNEGATIVE CYCLE HAS OCCURED\n");
    }

    return 0;
}