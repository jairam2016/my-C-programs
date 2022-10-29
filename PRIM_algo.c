#include<stdio.h>
int main()
{
    int cost[10][10],visited[10]={0},i,j,n,no_edges=1,min,a,b,min_cost=0;
    printf("\nENTER THE NUMBER OF NODES IN THE GRAPH\n ");
    scanf("%d",&n);
    printf("\nENTER THE COST ADJACENCY MATRIX OF THE GRAPH\n");
    //input graph
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            // cost is 0 then initialize it by maximum value
            if(cost[i][j]==0)
              cost[i][j]=1000;
        }
    }
    
    // logic for finding minimum cost spanning tree
    visited[1]=1; // visited first node
    while(no_edges<n)
    {
        min=1000;
        // in each cycle find minimum cost 
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    if(visited[i]!=0)
                    {
                        min=cost[i][j];
                        a=i;
                        b=j;
                    }
                }
            }
        }
        //if node is not visited
        if(visited[b]==0)
        {
            printf("\n%d TO %d  COST=%d\n",a,b,min);
            min_cost=min_cost+min;
            no_edges++;
        }
        visited[b]=1;
        // initialize with maximum value you can also use any other value
        cost[a][b]=cost[b][a]=1000; 
    }
    printf("\nMINIMUM COST OF THE MST= %d",min_cost);
    return 0;
}