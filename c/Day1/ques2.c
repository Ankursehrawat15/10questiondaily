#include <stdio.h>
int factorial(int number)
{

    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
void main(){
int num,fact;
printf("Enter the number\n");
scanf("%d",&num);
fact=factorial(num);
printf("Factorial of the number is %d",fact);




}
