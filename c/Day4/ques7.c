#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    switch (num > 0)
    {
    case 1:
        printf("number is POSITIVE\n");
        break;
    case 0:
        switch (num < 0)
        {
        case 1:
            printf("number is NEGATIVE\n");
            break;

        default:
            printf("number is ZERO\n");
        }
    }
    return 0;
}
