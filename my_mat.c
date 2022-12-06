#include <stdio.h>
#include "my_mat.h"
void algo(int arr[len][len])
{
  for (int k = 0; k < len; k++)
  {
    for (int i = 0; i < len; i++)
    {
      for (int j = 0; j < len; j++)
      {
        if (i == j)
          arr[i][j] = 0;
        else
        {
          if ((arr[i][k] != 0) && (arr[k][j] != 0))
          {
            int m = arr[i][k] + arr[k][j];
            if (arr[i][j] == 0)
            {
              arr[i][j] = m;
            }
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
void get_matrix(int arr[len][len])
{
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  algo(arr);
}
void path_exist(int arr[len][len], int i, int j)
{
  if (arr[i][j] != 0)
  {
    printf("True");
  }
  else
  {
    printf("False");
  }
}
void shortest_path(int arr[len][len], int i, int j)
{
  if (arr[i][j] != 0)
  {
    printf("%d", arr[i][j]);
  }
  else
  {
    printf("-1");
  }
}