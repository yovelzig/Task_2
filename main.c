#include <stdio.h>
#include "my_mat.h"
int main()
{
  char c;
  scanf("%c", &c);
  int mat[10][10];
  int x, y;
  while (c != 'D')
  {
    if (c == 'A')
    {
      get_matrix(mat);
    }
    else if (c == 'B')
    {
      scanf("%d%d", &x, &y);
      path_exist(mat, x, y);
    }
    else if (c == 'C')
    {
      scanf("%d%d", &x, &y);
      shortest_path(mat, x, y);
    }
    scanf("%c", &c);
  }
  return 0;
}