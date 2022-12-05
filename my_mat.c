#include <stdio.h>
#include "my_mat.h"
void algo(int arr[10][10])
{
  for (int k = 0; k < 10; k++)
  {
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        if (i == j)
          arr[i][j] = 0;
        else
        {
          if ((arr[i][k] != 0) && (arr[k][j] != 0))
          {
            int m = arr[i][k] + arr[k][j];
            if (arr[i][j] <= 0)
              arr[i][j] = m;
            else
            {
              if (arr[i][j] > arr[i][k] + arr[k][j])
              {
                arr[i][j] = arr[i][k] + arr[k][j];
              }
            }
          }
        }
      }
    }
  }
}
void get_matrix(int arr[10][10])
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  algo(arr);
}
void path_exist(int arr[10][10], int i, int j)
{
  if (arr[i][j] != 0)
  {
    printf("True\n");
  }
  else
  {
    printf("False\n");
  }
}
void shortest_path(int arr[10][10], int i, int j)
{
  if (arr[i][j] != 0)
  {
    printf("%d\n", arr[i][j]);
  }
  else
  {
    printf("-1\n");
  }
}