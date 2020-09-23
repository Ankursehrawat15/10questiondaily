#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the two numbers\n");
    scanf("%d%d", &num1, &num2);
    switch (num1 > num2)
    {
    case 1:
        printf("%d is greater\n", num1);
        break;

    case 0:
         switch (num1 == num2)
        {
        case 0:
         printf("%d is greater\n", num2);
            break;
         
         default:
         printf("Both are equal\n");
         break;
        }
        

    }
    return 0;
}
