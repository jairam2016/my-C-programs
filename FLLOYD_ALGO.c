#include<stdio.h>
#include<stdlib.h>

int arr[100][100];
int brr[100][100];
int no_of_edges;

int min(int a,int b)
{
    return (a<b)?a:b;
}

void path()
{
    for(int k=0;k<no_of_edges;k++)
    {
        for(int i=0;i<no_of_edges;i++)
        {
            for(int j=0;j<no_of_edges;j++)
            {
                brr[i][j]=min(brr[i][j],(brr[i][k]+brr[k][j]));
            }
        }
    }
}

void printing()
{
    printf("\nAFTER IMPLEMENTING FLOYD ALGO\n");
    for(int i=0;i<no_of_edges;i++)
    {
        for(int j=0;j<no_of_edges;j++)
        {
            if(brr[i][j]==99)
            {
                printf("\tINF");
            }
            
            else
            printf("\t%d",brr[i][j]);
        }
      printf("\n");  
    }
}
void main()
{
    printf("\nENTER THE NUMBER OF VERTICES IN YOUR GRAPH??\n");
    scanf("%d",&no_of_edges);
    printf("\nENTER THE VERTICES OF THE GRAPH\n");
    for(int i=0;i<no_of_edges;i++)
    {
        for(int j=0;j<no_of_edges;j++)
        {
            scanf("%d",&arr[i][j]);
            brr[i][j]=arr[i][j];
        }
      printf("\n");
    }

    path();
    printing();
}