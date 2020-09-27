#include <stdio.h>
int main()
{
  int num, i, j;
  printf("Enter the number\n");
  scanf("%d", &num);
  for (i = 1; i <= 10; i++)
  {
    for (j = 1; j <= num; j++)
    {

      printf("%d X %d =%d ,", j, i, (j * i));
    }
  }
  return 0;
}
