#include <stdio.h>

int main()
{
  int row_1, col_1, row_2, col_2, sum, size;

  printf("Please enter the size of the matrices: ");

  scanf("%d",&size);

    row_1 = size;
    row_2 = size;
    col_1 = size;
    col_2 = size;

    int mat_1[row_1][col_1],  mat_2[row_2][col_2], result_mat[col_1][row_2];

     printf("Enter elements of the 1st matrix\n");

    for(int i = 0; i < row_1; i++)
    {
      for(int j = 0; j < col_1; j++)
      {
         scanf("%d",&mat_1[i][j]);
      }
    }

    printf("\n");
    printf("Enter elements of the 2nd matrix\n");

    for(int i = 0; i < row_2; i++)
    {
      for(int j = 0; j < col_2; j++)
      {
         scanf("%d",&mat_2[i][j]);
      }
    }

    printf("\n");
    printf("The result matrix is \n");

    for(int i = 0; i < row_1; i++)
    {
      for(int j = 0; j < col_2; j++)
      {
        sum=0;
        for(int k = 0; k < col_1; k++)
        {
          sum = sum + mat_1[i][k] * mat_2[k][j];
        }
        result_mat[i][j] = sum;
      }
    }

    for(int i = 0; i < col_1; i++)
    {
        for(int j = 0; j < row_2; j++)
        {
            printf("%d ",result_mat[i][j]);
        }
        printf("\n");
    }
}



