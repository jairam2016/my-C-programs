#include<stdio.h>
int main()
{
    int arr1 [4][5];
    int arr2 [4][5];
    int sum [4][5];
    for(int i=0;i<4;i++)
    {
        for (int j = 0; j<5;j++)
        {
             printf("ENTER THE VALUE OF ROW %d and COLOUMN %d FOR MATRIX 1",(i+1),(j+1));
             scanf("%d",&arr1[i][j]);
             printf("ENTER THE VALUE OF ROW %d and COLOUMN %d FOR MATRIX 2",(i+1),(j+1));
             scanf("%d",&arr2[i][j]);
             sum[i][j]=arr1[i][j]+arr2[i][j];
        }
        printf("\n");
    }
     printf("THE ANSWER IS :\n");
     for(int i=0;i<4;i++)
    {
        for (int j = 0; j<5;j++)
        {
           printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}
