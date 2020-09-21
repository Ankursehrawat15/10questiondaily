#include <stdio.h>
void main()
{
    int angle1, angle2, angle3, sum;
    printf("Enter the angles\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;

    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("It is a valid TRIANGLE\n");
    }
    else
    {
        printf("It is not a valid TRIANGLE\n");
    }
}
