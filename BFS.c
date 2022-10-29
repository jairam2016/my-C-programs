#include<stdlib.h>
#include<stdio.h>

int graph[100][100];
int visited[100];
int total_nodes;

void bfs_traversal(int vertex)
{
    printf("%d\t",vertex);
    visited[vertex]=1;
    for(int j=0;j<total_nodes;j++)
    {
        if( !visited[j] && graph[vertex][j]==1)
        {
            bfs_traversal(j);
        }
    }
}

void main()
{
    printf("\nENTER THE NUMBER OF NODES\n");
    scanf("%d",&total_nodes);
    for(int i=0;i<total_nodes;i++)
    {
        for(int j=0;j<total_nodes;j++)
        {
            scanf("%d",&graph[i][j]);
        }
        printf("\n");
    }

    for(int j=0;j<total_nodes;j++)
    {
        visited[j]=0;
    }

    bfs_traversal(0);
}