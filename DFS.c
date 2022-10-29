#include<stdio.h>
#include<stdlib.h>

int graph[100][100];
int count;
int visited[100];
int arr[100],c=0;
static int k=0;
int total_nodes;

void dfs_traversal(int vertex)
{
    c=0;
    count++;
    printf("%d\t",vertex);
    visited[vertex]=1;
    for(int j=0;j<total_nodes;j++)
    {
        if( !visited[j] && graph[vertex][j]==1)
        {
           arr[++k]=j;
           c=1;  
        }

        if(count==total_nodes)
        {
            exit(0);
        }
    }

    if(c==1)
    {
        dfs_traversal(arr[k]);
    }
    else
    {
        k--;
        dfs_traversal(arr[k]);
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

    dfs_traversal(0);
}