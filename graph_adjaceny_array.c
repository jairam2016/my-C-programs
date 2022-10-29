#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int array[MAX][MAX];
int nodes;
void main()
{
    int choice,max_edges,origin=0,destination=0;
    printf("\nENTER THE TYPE OF GRAPH YOU NEED\n");
    printf("\n1.UNDIRECTED GRAPH\n");
    printf("\n2.DIRECTED GRAPH\n");
    printf("\nENTER THE CHOICE\t");
    scanf("%d",&choice);

    printf("\nNUMBER OF NODES YOU WANT IN THE GRAPH\t");
    scanf("%d",&nodes);

    if(choice==1)
    {
         max_edges=(nodes*(nodes-1))/2;
    }
    else
    {
         max_edges=(nodes*(nodes-1));
    }
    printf("\n");
    for(int i=1;i<=max_edges;i++)
    {
        printf("THE EDGE FOR [%d] FROM [ORIGIN] TO [DESTINATION] else PRINT(-1 -1) TO QUIT\t",i);
        scanf("%d\t%d",&origin,&destination);
        if(origin==-1 || destination==-1)
        {
            break;
        }

        if(origin>=nodes||destination>=nodes||origin<0||destination<0)
        {
            printf("\nINVALID EDGE\n");
            i--;
        }

        else
        {
            array[origin][destination]=1;
                if(choice==1)
               {
                array[destination][origin]=1;
               }
        }
        printf("\n");
    }

    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            printf("%d\t",array[i][j]);
        }

         printf("\n");
    }
}