#include <stdio.h>
int main()
{
    int month;
    printf("Enter the month no 1 to 12 \n");
    scanf("%d", &month);
    switch (month)
    {

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;

    case 2:
        printf("28 days \n");
        break;

    default:
        printf("Invalid number enter from 1 to 12");
        break;

        
    }
    return 0;
}
