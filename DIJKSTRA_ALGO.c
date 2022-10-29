#include<stdio.h>
#include<stdlib.h>

int cost[900][900];
int path[900][900];
int distance[900];
int node,indexno=1,row,coloumn,i,j,paths,visit_node,min;

void main()
{
    printf("\nENTER THE NUMBER OF NODES IN THE GRAPH: ");
    scanf("%d",&node);
    printf("\nENTER THE COST ADJACENCY MATRIX\n");
    for(int i=1;i<=node;i++)
    {
        //printf("\n");
        for(int j=1;j<=node;j++)
        {
            scanf("%d",&cost[i][j]);
        }
    }

    printf("\nENTER THE NODE THAT YOU WANT TO VISIT: ");
    scanf("%d",&visit_node);

    printf("\nENTER THE NUMBER OF PATHS TO VISIT THAT PARTICULAR NODE: ");
    scanf("%d",&paths);

    printf("\nENTER THE PATH MATRIX\n");
    for(int i=1;i<=paths;i++)
    {
        for(int j=1;j<=node;j++)
        {
            scanf("%d",&path[i][j]);
        }
    }

    //MAIN LOGIC
    for(i=1;i<=paths;i++)
    {
        distance[i]=0;
        row=1;
        for(int j=1;j<=node;j++)
        {
            if(row!=visit_node)
            {
                coloumn=path[i][j+1];
                distance[i]=distance[i]+cost[row][coloumn];
            }
            row=coloumn;
        }
    }
    min=distance[1];

    for(i=1;i<=paths;i++)
    {
        if(distance[i]<=min)
        {
            min=distance[i];
            indexno=i;
        }
    }

    printf("\nMINIMUM DISTANCE=%d",min);
    printf("\nTHE SHORTEST PATHS IS\t");
    for(i=1;i<=node;i++)
    {
        if(path[indexno][i]!=0)
        {
            printf("-->%d",path[indexno][i]);
        }
    }
}