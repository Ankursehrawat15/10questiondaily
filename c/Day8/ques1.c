#include <stdio.h>
int main()
{
    int num, i, pr = 0;
    printf("Enter the number: \n");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            pr++;
          
        }
    }
    if (pr == 0 && num != 1)
    {
        printf("It is a prime number\n");
    }
    else
    {
        printf("It is not a prime number\n");
    }
    return 0;
}
