// sentinel search
#include <stdio.h>
#define M 6
int main()
{
  int x[M], i, sv;
  printf("\ndata : ");
  for (i = 0; i < 5; i++)
    scanf("%d", &x[i]);
  printf("\nsearch value : ");
  scanf("%d", &x[5]);
  for (i = 0; x[i] != x[5]; i++)
    ;
  if (i == 5)
    printf("\nnot found");
  else
    printf("\n found at position : %d ", i);
}