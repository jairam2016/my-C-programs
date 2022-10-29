#include<stdio.h>
#include<stdlib.h>

int parent[10000];
int rank[10000];
int nodes;

void make_set()
{
    for(int i=1;i<=nodes;i++)
    {
        parent[i]=i;
        rank[i]=0;
    }
}

int findPar(int node)
{
    while(node==parent[node])
    {
        return node;
    }
    return parent[node]=findPar(parent[node]);
}
void unionn(int u,int v)
{
    v=findPar(v);
    u=findPar(u);

    if(rank[u]<rank[v])
    {
        parent[u]=v;
    }

    else if(rank[u]>rank[v])
    {
        parent[v]=u;
    }

    else
    {
        parent[u]=v;
        rank[v]++;
    }
}
void main()
{
    int src,dest;
    printf("\nTHE NUMBER OF NODES\n");
    scanf("%d",&nodes);
    while(nodes!=1)
    {
        printf("\nSOURCE POSITION\t");
        scanf("%d",&src);
        printf("\nDESTINATION POSITION\t");
        scanf("%d",&dest);
        unionn(src,dest);
        nodes--;
    }
    printf("\n");
    for(int i=1;i<=nodes;i++)
    {
        printf("\t%d",parent[i]);
    }
}