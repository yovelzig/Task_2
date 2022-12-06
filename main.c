#include <stdio.h>
#include "my_mat.h"
int main()
{
  char c;
  scanf("%c", &c);
  int mat[len][len];
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
      printf("\n");
    }
    else if (c == 'C')
    {
      scanf("%d%d", &x, &y);
      shortest_path(mat, x, y);
      printf("\n");
    }
    scanf("%c", &c);
  }
  return 0;
}