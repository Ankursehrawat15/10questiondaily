#include <stdio.h>
int main()
{
    int week;
    printf("Enter your week no (1 to 7)\n");
    scanf("%d", &week);
    switch (week)
    {
    case 1:
        printf("MONDAY\n");
        break;

    case 2:
        printf("TUESDAY\n");
        break;

    case 3:
        printf("WEDNESDAY\n");
        break;

    case 4:
        printf("THURSDAY\n");
        break;

    case 5:
        printf("FRIDAY\n");
        break;

    case 6:
        printf("SATURDAY\n");
        break;

    case 7:
        printf("SUNDAY\n");
        break;

    default:
        printf("Invalid no please provide from 1 to 7\n");
    }
    return 0;
}
