#include <stdio.h>

int main()
{
    int sparse_matrix[10][10] , r1, c1;
    printf("Enter Dimensions Of Matrix");
    scanf("%d %d",&r1,&c1);
    for (int i = 0; i<r1;i++)
    {
        for(int j = 0; j<c1;j++)
        {
            scanf("%d",&sparse_matrix[i][j]);
        }
    }
    
    int size = 0;
    for(int i=0;i<r1;i++)
    {
        for(int j=0 ; j<c1;j++)
        {
            if(sparse_matrix[i][j] != 0)
            {
                size++;
            }

        }
    }
     int matrix[3][size];
     int k=0;

     for(int i =0 ;i <r1;i++)
     {
        for(int j=0; j<c1;j++)
        {
            if(sparse_matrix[i][j] != 0)
            {
                matrix[0][k] = i;
                matrix[1][k] = j;
                matrix[2][k] = sparse_matrix[i][j];
                k++;
            }
        }
     }

     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c1;j++)
        {
            printf("%d",matrix[i][j]);
            printf("/t");
        }
        printf("\n");
     }
     return 0;
}