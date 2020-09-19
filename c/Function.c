#include <stdio.h>
int area()
{
    int side;
    printf("Enter the side of square\n");
    scanf("%d", &side);
    return side * side;
}
void main()
{
    int result;
    result = area();
    printf("Area of square is %d sq.units\n", result);
}
